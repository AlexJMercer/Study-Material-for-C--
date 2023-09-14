// C++ programs to explore about strings 

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "Hello";
    string str2 = "World";

    string str = str1 + str2; // Concatenation
    cout << "str1 + str2 : " << str << endl;

    // Comparing strings
    // Operators <, >, <=, >=, ==, != can be used to compare 
    // strings instead of strcmp() in C

    if (str1 < str2 != 0)
        cout << "str1 is not equal to str2" << endl;
    else
        cout << "str1 is equal to str2" << endl;

    return 0;
}