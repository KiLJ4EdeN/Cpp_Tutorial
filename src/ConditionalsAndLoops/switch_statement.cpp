#include <iostream>
using namespace std;

// switch releaves us from writing if else if loops, 
// by targeting a variable and doing different jobs based on the input received.

int main()
{
    int age = 25;
    switch (age) {
        // for different cases, we execute different blocks,
        case 16:
            cout << "Too young";
            break;
        case 42:
            cout << "Adult";
            break;
        case 70:
            cout << "Senior";
            break;
        // there is also a default case for when none of conditions are provided.
        default:
            cout << "This is the default case";
    }

    return 0;
}
