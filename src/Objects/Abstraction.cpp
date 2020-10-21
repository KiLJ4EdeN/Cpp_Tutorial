#include <iostream>
using namespace std;

class BankAccount {
    // There also other access levels like public,
    // protected and private which we will get into later
    public:
        void CreateAccount() {
            cout << "Account Was Successfully Created." << endl;
        }
};

int main() 
{
    BankAccount acc;
    acc.CreateAccount();
}
