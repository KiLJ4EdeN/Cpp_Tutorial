#include <cstdlib>
#include <iostream>

using namespace std;

void randint(int low, int high, int num)
{
        for (int i = 0; i < num; i++)
        {
                cout << low + (rand() % high) << endl;
        }
}


int main () {
    // set the random seed first.
    srand(98);
    int low = 1;
    int high = 6;
    int num = 10;
    randint(low, high, num)   ;
}
