#include <iostream>
using namespace std;

template <class T>
class charIdentifier {
    public:
        charIdentifier (T x) {
            cout << x << " - not a char" << endl;
        }
};

template < >
// Do a different body if the input is char, much like overloading.
class charIdentifier<char> {
    public:
        charIdentifier (char x) {
            cout << x << " - is a char!" <<endl;
        }
};

int main () {
    charIdentifier<int> ob1(42);
    charIdentifier<double> ob2(5.47);
    charIdentifier<char> ob3('s');
}