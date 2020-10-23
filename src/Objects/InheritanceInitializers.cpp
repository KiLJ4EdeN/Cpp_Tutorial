#include <iostream>
using namespace std;

class Base {
    public:
        Base() 
        {
            cout <<"Base Was Created."<<endl;
        }
        ~Base()
        {
            cout <<"Base Was Destroyed."<<endl;
        }
};

class Tower: public Base {
    public:
        Tower()
        {
            cout <<"Tower Was Created."<<endl;
        }
        ~Tower()
        {
            cout <<"Tower Was Destroyed."<<endl;
        }
};

int main() {
    Tower tw;
}