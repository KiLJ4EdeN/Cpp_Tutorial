#include <iostream>
using namespace std;

int main()
{
    int numbers[100];
    cout << sizeof(numbers) / sizeof(numbers[0]);

    return 0;
}
