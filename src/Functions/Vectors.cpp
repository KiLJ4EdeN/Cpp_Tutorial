#include <iostream>
#include <vector>

// Create A vector instance
std::vector<int> v = {4, 2, 0};
std::size_t i = 0;

void DisplayVector() {
    while (i < v.size()){
        std::cout << i << " element is: " << v[i] << std::endl;
        i = i + 1;
    }
}

int main() {
    DisplayVector();
    return 0;
}

