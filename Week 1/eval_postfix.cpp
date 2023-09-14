// Evaluating a postfix expression in C++ using the STL stack

#include<iostream>
#include<stack>

int main()
{
    char postfix[] = {'1', '2', '3', '*', '+', '4', '-'};     // 1 + 2 * 3 - 4
    std::stack<int> stack;

    int size = sizeof(postfix) / sizeof(postfix[0]);
    for (int i=0; i < size; i++)
    {
        char ch = postfix[i];
        if (isdigit(ch))
        {
            stack.push(ch - '0');
        }
        else
        {
            int op1 = stack.top();
            stack.pop();

            int op2 = stack.top();
            stack.pop();

            switch (ch)
            {
                case '*': 
                    stack.push(op2 * op1);
                    break;
                case '/':
                    stack.push(op2 / op1);
                    break;
                case '-':
                    stack.push(op2 - op1);
                    break;
                case '+':
                    stack.push(op2 + op1);
                    break;
            }
        }
        std::cout << "The result of the expression is " << stack.top() << std::endl;
        // Result of the expression is 1.

        return 0;
    }
}