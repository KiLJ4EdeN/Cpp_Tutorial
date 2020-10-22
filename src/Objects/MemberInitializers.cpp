#include <iostream>
#include <string>

using namespace std;

// Create the class, Constructor and private vars.
class Kiljaeden {
    public:
        Kiljaeden(int a, string b);
    private:
		// Here the habitat variable is const, and it cannot be changed
		// After initiation.
        int level;
        const string habitat;
};

Kiljaeden::Kiljaeden(int a, string b)
: level(a), habitat(b)
{
    cout << level << endl;
    cout << habitat << endl;
}

int main() {
    Kiljaeden obj(99, "Sunwell plateu");
}
