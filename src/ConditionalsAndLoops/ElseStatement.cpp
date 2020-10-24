#include <iostream>
using namespace std;

// else provides us with a way do something, when a if condition is not satisfied.
int main()
{
    int age = 18;
    // first if condition.
    if (age > 14) {
	// second if condition.
        if(age >= 18) {
            cout << "Adult";
        }
	// age in range 14 to 18.
        else {
            cout << "Teenager";
        }
    }
    // age is less than 14
    else {
        if (age > 0) {
            cout << "Child";
        }
        else {
            cout << "Something's wrong";
        }
    }
    /*
    // important to note that you dont need curly braces if the loop body is short enough.
    int a = 10;
    if (a > 4)
        cout << "Yes";
    else
        cout << "No";
    */
    return 0;
}
