#include <iostream>
using namespace std;

class Mother
{
    public:
        Mother() {};
        void sayHi() {
            cout << "Hi";
        }
};

class Daughter: public Mother
{
    public:
        Daughter() {};
};

int main() {
    Daughter d;
    d.sayHi();
}