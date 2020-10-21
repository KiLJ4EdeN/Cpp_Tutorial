#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
   	time_t t;
	time(&t);
	
	cout << "Time: " << t <<  endl;
}
