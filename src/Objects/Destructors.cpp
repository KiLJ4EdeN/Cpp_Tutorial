#include <iostream>
using namespace std;


// The class can also be defined in a CNN.h seperate file.
// Then all we need to do is #include <CNN.h> at the start of our program.
class CNN
{
    public:
        // Set constructor and destructor to be public.
        CNN();
        ~CNN();
};

// Define them using Scope Resolution Operator.
// This is also used when we have global and a local variable and we want to call the global one in a function
// then we can call the local by its name: ex: "a", and the global with: "::a"
CNN::CNN()
{
    cout<<"CNN was created."<<endl;
}

CNN::~CNN()
{
    cout<<"CNN was destroyed."<<endl;
}

int main() {
    CNN model;
}