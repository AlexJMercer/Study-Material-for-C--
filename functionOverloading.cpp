#include <iostream>

using namespace std;

int add (int a = 10, int b = 30)
{
    return (a + b);
}

int main ()
{
    cout << "With no parameters : " << add() << endl;
    cout << "With one parameter : " << add(5) << endl;
    cout << "With two parameters : " << add(5, 10) << endl;
    return 0;
}