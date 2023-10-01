#include <iostream>

using namespace std;

int main()
{
    int *arr = new int[5];

    arr[0] = 5, arr[1] = 10, arr[2] = 15, arr[3] = 20, arr[4] = 25;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    delete [] arr;

    return 0;
}