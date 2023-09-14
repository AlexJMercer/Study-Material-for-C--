// Program to show what are manifest constants

#include <iostream>
#include <cmath>

using namespace std;

#define TWO 2                       // Manifest constant    
#define PI 4.0*atan(1.0)            // Manifest constant

int main()
{
    cout << "The value of PI is " << PI << endl;
    cout << "The value of TWO is " << TWO << endl;
    cout << "The value of PI*PI is " << PI*PI << endl;
    cout << "The value of TWO*PI is " << TWO*PI << endl;
    return 0;
}