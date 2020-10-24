#include <iostream>
using namespace std;

int main() 
{
  // define two variables with int datatype.
  int a, b;
  // reserve the sum variable.
  int sum;
  // get a, b through cin from the user.
  cout << "Enter a number \n";
  cin >> a;
  cout << "Enter another number \n";
  cin >> b;
  sum = a + b;
  cout << "Sum is: " << sum << endl;

  return 0;
}
