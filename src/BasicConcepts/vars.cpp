/* 
 * The type of a variable specifies the possible values, what operations we can
 * perform on that variable, and how such operations will behave.  Let's start
 * with a few examples:
 *
 *    int is the type used for whole numbers.  We can add, subtract, multiply
 *    and divide ints, though division only gives the whole part: be careful, as
 *    this means 2/3 == 0.  There is a maximum and minimum value an int can
 *    store; if your program adds two ints that are too large, the results can
 *    be unpredictable and unpleasant.  Dividing by zero is not allowed.
 *
 *    double is the type used for numbers which aren't necessarily whole; they
 *    are sometimes also called floating point numbers.  We can add, subtract,
 *    multiply and divide doubles, but the results are not precise.  However, if
 *    you can tolerate some error, they can still be useful.  An example of a
 *    double literal is 5.3.  Dividing by zero is still not allowed.
 *
 *    bool is a type which has only two values: true and false.  It is used to
 *    represent things which can be aptly described with one of those two words.
 *    Amongst other things, comparison operators return bool.
 *
 *    char is a type for representing characters.  We haven't seen any
 *    characters by themselves yet, but the string literals we used in the last
 *    chapter were built up from them.  For example, 'a' is of type char and is
 *    the character a.  Character literals like 'a' are surrounded by single
 *    quotes, while string literals use double quotes.
 *
 *    std::string is a type used for strings; that is, fragments of text.  The
 *    types above were all primitive ones, but std::string is not, though it is
 *    standard.  In order to use an std::string, we will need to include string.
 *    It supports a large number of operations, such as getting the string
 *    length or getting the character at some index.  Note that string literals
 *    are not std::strings -- however, we can create std::strings from them.*/

#include <iostream>
using namespace std;

int main()
{
   int a = 30;
   int b = 12;
   int sum = a + b;

   cout << sum;

   return 0;
}

//Outputs 42
