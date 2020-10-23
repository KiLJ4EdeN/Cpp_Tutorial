#include <iostream>
using namespace std;

class Day {
    public:
        Day(int a) : hour(a)
        { }
        void printHour() {
            cout << hour <<endl;
            cout << this->hour <<endl;
            cout << (*this).hour <<endl; 
        }
    private:
        int hour;
};

int main() {
    Day obj(8);
    obj.printHour();
}