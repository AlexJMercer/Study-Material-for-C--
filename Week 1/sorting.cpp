// C++ program to implement sorting using sort() in STL

#include <iostream>
#include <vector>
#include <algorithm>

bool compare(int a, int b)       // Function pointer
{
    return a > b;
}

int main()
{
    std::vector<int> arr = {10, 20, 5, 8, 15, 64, 32, 1};

    int n = arr.size();

    std::sort(arr.begin(), arr.end(), compare);     // Valid

    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
}
