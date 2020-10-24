#include <iostream>

// we are going to create a simple calculator applicaiton.
// which takes two inputs from the user and an operation, capable of doing summation, multiplication, division and subtraction.
using namespace std;

int main(){
	// declare two integers.
	int num1, num2;
	// declare operation type as a character.
	char op;
	// get the numbers and the operation from the user and store them in respective variables.
	cout << "Enter The First Number: " << endl;
	cin >> num1;
	cout << "Enter +, -, *, /" << endl;
	cin >> op;
	cout << "Enter The Second Number: " << endl;
	cin >> num2;
	cout << "" << endl;
	
	// find the requested operation and print an error massage if the operation is not in the list.
	if (op == '+') {
		cout << num1 + num2 << endl;
	} else if (op == '-') {
		cout << num1 - num2 << endl;
	} else if (op == '*') {
		cout << num1 * num2 << endl;
	} else if (op == '/') {
		cout << num1 / num2 << endl;
	} else {
		cout << "\nWrong Operation, Try Again." << endl;
	}
}
