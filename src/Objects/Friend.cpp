#include <iostream>
using namespace std;

// The friend keyword is similar to setter, getters but, its different in a sense that,
// since with the former you free access to privates and make those methods
// available to anyone, but with the friend keyword its limited to desired objects
// to access a classes private data.

class Champion {
    public:
        Champion() {
            level = 0;
        }
    private:
        int level;

    friend void levelUp(Champion &obj);
};

void levelUp(Champion &obj) {
    obj.level = 2;
    cout << obj.level;
}

int main() {
    Champion obj;
    levelUp(obj);
}
