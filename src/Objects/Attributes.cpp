#include <iostream>
#include <string>
using namespace std;

class Car {
    public:
	// Here "name" is an attribute to the car
	// we could also add other like, horsepower, acceleration, fuel and etc.
        string name;
};

int main() {
    Car myCar;
    myCar.name = "Dodge Viper";
    cout << "Your Car Name is: "<< myCar.name << endl;

    return 0;
}
