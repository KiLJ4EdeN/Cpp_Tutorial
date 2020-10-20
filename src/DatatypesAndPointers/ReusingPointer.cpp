#include <iostream>

using namespace std;

int main()
{
    int *p = new int; // request memory
    *p = 5;
    cout << *p << endl;
    delete p;
    *p = 12;
    cout << *p << endl;
}

