#include <iostream>
using namespace std;

// lookup table for some of the available arithmetic operators in c++.
int main() 
{
  // define two integers.
  int a, b;
  a = 5;
  b = 2;
  // perfom some of the mathematical operations.
  cout << "Sum is: " << a + b << endl;
  cout << "Divison: " << a / b << endl;
  cout << "Reminder:" << a % b << endl;
  cout << "Mult": << a * b << endl;
  // pay attention to the order of operations.
  // (), */, +-
  cout << "Operation Orders": << (a + b) + 10 / 2 << endl;


  return 0;
}
