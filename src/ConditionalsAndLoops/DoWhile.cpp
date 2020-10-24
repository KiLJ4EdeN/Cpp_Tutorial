#include <iostream>
using namespace std;

// we ll go over the do while loop in this one.
// the do while loop is different from a noraml while loop in a sense that, a do while loop at least runs once.

int main()
{   
    
    int a = 42;
    // do the operation once. 
    do {
        cout << a << endl;
        a++;
    // check the condition to continue.
    } while(a < 5);

    return 0;
}
