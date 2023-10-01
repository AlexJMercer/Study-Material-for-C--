#include <iostream>

using namespace std;

int main()
{
    int *p = new int;
    *p = 5;
    
    cout << *p << endl;
    delete p;
    
    cout << *p << endl;
    return 0;
}