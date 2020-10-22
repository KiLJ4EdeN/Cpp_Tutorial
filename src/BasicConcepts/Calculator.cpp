#include <iostream>

using namespace std;

int main(){
	int num1, num2;
	char op;
	cout << "Enter The First Number: " << endl;
	cin >> num1;
	cout << "Enter +, -, *, /" << endl;
	cin >> op;
	cout << "Enter The Second Number: " << endl;
	cin >> num2;
	cout << "" << endl;

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
