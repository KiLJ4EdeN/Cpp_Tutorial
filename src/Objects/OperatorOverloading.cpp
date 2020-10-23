#include <iostream>
using namespace std;

class Integer {
    public:
        int value;
        Integer() { }
        Integer(int a)
        : value(a) { }

        Integer operator+(Integer &obj) {
            Integer res;
            res.value = this->value + obj.value;
            return res; 
        }
};

int main() {
    Integer obj1(12), obj2(55);
    Integer res = obj1+obj2;

    cout << res.value;
}