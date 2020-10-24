#include <iostream>
using namespace std;

// logical operators
// a simple usage would be reversing if loop conditions with "not",
// or chaining a list of conditions using "or", "and".

int main()
{
	// && (and)
	// || (or)
	// ! (not)
    int age = 10;
    if ( !(age > 16) ) {
        cout << "Your age is less than 16" << endl;
    }

    return 0;
}
