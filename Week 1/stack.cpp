// Reversing a string using stack

#include <iostream>
#include <stack>
#include <string>

int main()
{
    std::string str = "Hello World";
    std::stack<char> stack;

    // Pushing each character of the string into the stack
    for (int i = 0; i < str.length(); i++)
        stack.push(str[i]);

    // Pop each character from the stack and print it
    while (!stack.empty())
    {
        std::cout << stack.top();
        stack.pop();
    }

}