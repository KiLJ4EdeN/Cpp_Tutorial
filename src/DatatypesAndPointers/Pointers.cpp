#include <iostream>
using namespace std;
// & -> Address-of operator
// * -> Contents-of or dereference operator.


int main()
{
    // Define A Variable
    int var = 50;
    // Allocate A place For The Pointer
    int *p;
    // Place The Memory Location in The Pointer.
    p = &var;

    cout << var << endl;
    // Outputs 50 (the value of var)

    cout << p << endl;
    // Outputs 0x29fee8 (var's memory location)

    cout << *p << endl;
    /* Outputs 50 (the value of the variable
     stored in the pointer p) */

    return 0;
}
