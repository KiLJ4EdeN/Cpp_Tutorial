// This, like any line starting with a #, is a preprocessor directive.  Such
// lines are instructions for manipulating the program text.  The #include
// directive, which is what we will use most often, states that the contents of
// a certain file should be inserted where the directive is.  In this case, we
// ask for the file iostream.  The io stands for input output, and that's what
// we'll be using it for.
#include <iostream>


int main()
{
   int myVariable = 10;
   std::cout << myVariable;
   return 0;
}
// Outputs 10
