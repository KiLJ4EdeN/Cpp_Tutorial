#include <iostream>
using namespace std;

// Constructors provide you with a way to add some attributes.
// When the object is Created.
// Is very usefull when something needs to be defined at Object
// Decalration level.

class Hero {
    public:
        Hero(string nm) {
            // On Constructor Call the Setter.
            setName(nm);
        }
        void setName(string x) {
            name = x;
        }
        string getName() {
            return name;
        }
    private:
        string name;
};

int main() {
    Hero ob1("Invoker");
    Hero ob2("Shadow Fiend");
    cout << ob1.getName();
}
