#include<iostream>

using namespace std;

int main()
{
    int *p = (int*)operator new(sizeof(int));
    *p = 5;

    cout << *p << endl;

    operator delete(p);
}