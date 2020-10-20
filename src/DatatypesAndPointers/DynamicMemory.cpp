

// Static And Dynamic Memory
// The Stack: All local variables take memory from the stack
// The Heap: Unused Programm memory that can be used to dynamically allocate
// Memory when the program is running.
// Some times the size of the memory allocation needs to be defined at runtime.
// Then we use heap and the NEW operator, which does the allocation.
// And returns the address of the space that was allocated.
// Example:
// new int;
// The Memory location can be saved in a pointer so a variable can be assigned
// to it when dereferencing it.
// int *p = new int;
// *p = 5;
// The Memory Management For Variable on the stack is done automatically.
// For Stuff on Heap tho we Need to delete the pointers to free the memory.
#include <iostream>
using namespace std;

int main()
{
    int *p = new int; // request memory
    *p = 5; // store value

    cout << *p << endl; // use value

    delete p; // free up the memory

    return 0;
}
