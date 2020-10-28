# install dependencies first
sudo dnf install epel-release git gcc gcc-c++ cmake3 qt5-qtbase-devel \
    python3 python3-devel python3-pip cmake python3-devel python3-numpy \
    gtk2-devel libpng-devel jasper-devel openexr-devel libwebp-devel \
    libjpeg-turbo-devel libtiff-devel tbb-devel libv4l-devel \
    eigen3-devel freeglut-devel mesa-libGL mesa-libGL-devel \
    boost boost-thread boost-devel gstreamer1-plugins-base libcanberra-gtk2

# create a temp dir
mkdir -p ~/opencv_build && cd ~/opencv_build

# clone opencv repos
git clone https://github.com/opencv/opencv.git
git clone https://github.com/opencv/opencv_contrib.git

# build the library
cd ~/opencv_build/opencv && mkdir build && cd build

cmake3 -D CMAKE_BUILD_TYPE=RELEASE \
    -D CMAKE_INSTALL_PREFIX=/usr/local \
    -D INSTALL_C_EXAMPLES=ON \
    -D INSTALL_PYTHON_EXAMPLES=ON \
    -D OPENCV_GENERATE_PKGCONFIG=ON \
    -D OPENCV_EXTRA_MODULES_PATH=~/opencv_build/opencv_contrib/modules \
    -D BUILD_EXAMPLES=ON ..
    
# use cores based on the "nproc" command.
make -j8
sudo make install

# create a symbolic link to the library for pkg-config
export lib_dir = lib64
sudo ln -s /usr/local/{lib_dir}/pkgconfig/opencv4.pc /usr/share/pkgconfig/

# find where the file is if faced an error.
# whereis pkgconfig
# sudo ln -s /usr/local/lib/pkgconfig/opencv4.pc /usr/share/pkgconfig/
# sudo ldconfig

# add shared libraries
export LD_LIBRARY_PATH=~/opencv_build/opencv/build/lib/:$LD_LIBRARY_PATH

# also to find packages use: pkg-config --list-all | grep packagename
g++ somecode.cpp -o output `pkg-config --cflags --libs opencv4`
