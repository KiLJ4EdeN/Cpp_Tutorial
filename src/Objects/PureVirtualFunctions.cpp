#include <iostream>
using namespace std;

class Enemy {
    public:
        // pure virual function.
        // this makes it an abstract class
        // since the derivers must define this function.
        virtual void attack() = 0;
};

class Ninja: public Enemy {
    public:
        void attack() {
            cout << "Ninja!"<<endl;
        }
};

class Monster: public Enemy {
    public:
        void attack() {
            cout << "Monster!"<<endl;
        }
};


int main()
{
    Ninja n;
    Monster m;
    Enemy *e1 = &n;
    Enemy *e2 = &m;

    e1->attack();
    e2->attack();

    return 0;
}