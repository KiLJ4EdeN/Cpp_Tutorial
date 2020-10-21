#include <iostream>
#include <string>
using namespace std;


// Encapsulation Allows for Changing the Class Attrs Without Having To Access them directly. 


class Undead {
    public:
        void setName(string x) {
            name = x;
        }
        string getName() {
            return name;
        }
    // If this was public it would ve been accessible.
    private:
        string name;
};

int main() {
    Undead lk;
    lk.setName("Lich King");
    cout << lk.getName() << endl;
    // results in an error, since the name att is private. comment this out to run successfully.
    // cout << lk.name << endl;

    return 0;
}
