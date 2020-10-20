#include <iostream>
using namespace std;

int main()
{
    int age = 25;
    switch (age) {
        case 16:
            cout << "Too young";
            break;
        case 42:
            cout << "Adult";
            break;
        case 70:
            cout << "Senior";
            break;
        default:
            cout << "This is the default case";
    }

    return 0;
}