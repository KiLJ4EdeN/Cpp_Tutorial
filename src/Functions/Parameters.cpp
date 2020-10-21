#include <iostream>
using namespace std;

// A function with a single argument
int timesTwo(int x) {
    return x*2;
}

// Multiple args
int addNumbers(int x, int y, int z, int a) {
  int result = x + y + z + a;
  return result;
}

int main() {
    cout << timesTwo(8) << endl;

    cout << timesTwo(5) << endl;

    cout << timesTwo(42) << endl;

    cout << addNumbers(1, 1, 1, 1) << endl;
} 
