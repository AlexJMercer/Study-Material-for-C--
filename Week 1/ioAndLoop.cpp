// Handling IO

// For adding two numbers 
#include <iostream>
int main() {
    int a, b;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    int sum = a + b;
    std::cout << "Sum is: " << sum << std::endl;

    return 0;
}