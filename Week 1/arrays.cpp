// Dynamic Arrays using vectors

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int count, sum = 0;
    cin >> count;

    vector<int> arr;
    arr.resize(count);

    for (int i = 0; i < count; i++) 
    {
        cin >> arr[i];
        sum++;
    }
    cout << "Array Sum : " << sum << endl;
    return 0;
}