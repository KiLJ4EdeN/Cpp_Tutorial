#include <iostream>
#include <string>
using namespace std;

int main(){
	int num;
	string isPrime = "NOPE";
	cout << "Enter A Number and See if its prime!" << endl;
	cin >> num;
	if (num == 0 || num == 1) {
		isPrime = "NOPE";
	} else {
		isPrime = "YEP";
		for (int i=2; i<=num/2; i++){
			if (num % i == 0){
				isPrime = "NOPE";
			}
		}
	}	
	cout << "Was it Prime? " << isPrime << endl;
}
