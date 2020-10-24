#include <iostream>
using namespace std;

// the while loop lets us run a code body as long as a conditon stays approved.

int main()
{
    int num = 1;
    int number;
    int total = 0;

    while (num <= 5) {
        cin >> number;
        total += number;
        num++;
    }
    cout << total << endl;

    return 0;
}
