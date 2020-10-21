#include <iostream>
using namespace std;

// Overloading enables us to use a function with different dtypes
// Or even have diffenet function bodies for them.

#include <iostream>
using namespace std;

void printNumber(int x) {
    cout << "Prints an integer: " << x << endl;
}
void printNumber(float x) {
    cout << "Prints a float: " << x << endl;
}

int main() {
    int a = 16;
    float b = 54.541;
    printNumber(a);
    printNumber(b);
}


// Another Important thing to note is that we cant overload functions with different return types, running the code below will result in an error.
/* int printName(int a) { }
float printName(int b) { }
double printName(int c) { } */
