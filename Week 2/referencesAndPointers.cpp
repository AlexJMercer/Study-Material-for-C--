// Discussing and playing around with pointers and references in C++

#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    int *xPtr = &x;

    cout << "x = " << x << endl;                // 5
    cout << "xPtr = " << xPtr << endl;          // Memory address of x
    cout << "*xPtr = " << *xPtr << endl;        // Pointer to memory address of x, which is 5

    int yRef = 10;                              // Uninitialized pointer
    int *yPtr = &yRef;                          // Reference to uninitialized pointer
    int *zPtr = &yRef;                          // Pointer to reference to uninitialized pointer

    cout << "yPtr = " << yPtr << endl;          // Memory address of yPtr
    cout << "*yPtr = " << *yPtr << endl;        // Pointer to memory address of yPtr, which is 10
    cout << "yRef = " << yRef << endl;          // Reference to uninitialized pointer, which is 10
    cout << "zPtr = " << zPtr << endl;          // Memory address of zPtr
    cout << "*zPtr = " << *zPtr << endl;        // Pointer to memory address of zPtr, which is 10

    return 0;
}