#include <iostream>
using namespace std;

// the for loop lets us execute a block of code for consequtive times.


int main()
{
    for (int a = 0; a < 50; a+=10) {
        // note that the loop condition can also be used for indexing arrays, etc..
        cout << a << endl;
    }
    return 0;
}
