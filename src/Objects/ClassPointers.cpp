#include <iostream>
using namespace std;

class Dog
{
    public:
        Dog();
        void bark();
};

Dog::Dog() 
{
    cout << "Initiated Dog" << endl;
}
void Dog::bark() {
    cout << "BAARRRK!!!!" <<endl;
}

int main() {
    Dog obj;
    Dog *objptr = &obj;
    objptr->bark();
}