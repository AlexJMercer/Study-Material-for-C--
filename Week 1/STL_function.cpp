// Common STL functions in use

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> printArray(std::vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main()
{
    std::vector<int> arr_one = {56, 47, 23, 56, 81, 33, 12, 67, 34, 90, 45, 23};
    std::vector<int> arr_two = {84, 23, 56, 78, 12, 34, 90, 45, 23, 56, 81, 33};

    std::replace(arr_one.begin(), arr_one.end(), 23, 100);     // Replace all 23 with 100
    std::rotate(arr_two.begin(), arr_two.begin() + arr_two.size() / 2, arr_two.end());     // Rotate the array by half
    
    std::merge(arr_one.begin(), arr_one.begin() + arr_one.size() / 2, arr_two.begin() + arr_two.size() / 2, arr_two.end(), arr_one.begin());     // Merge two sorted arrays
        // Begin of 1st array,  end of 1st array,                     begin of 2nd array,                   end of 2nd array, begin of merged array

    std::swap(arr_one, arr_two);     // Swap two arrays
    std::remove(arr_one.begin(), arr_one.end(), 23);     // Remove all 23's from the array

    std::cout << "Array one: ";

}
