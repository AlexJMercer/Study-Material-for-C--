#include <iostream>

using namespace std;

class Stack
{
    private:
        int data_[10];
        int top_;

    public:
        Stack() {           // this is a constructor
            top_ = -1;
        }

        bool empty() {
            return (top_ == -1);
        }

        void push(int value) {
            if (top_ < 9) {
                data_[++top_] = value;
            }
        }

        int pop() {
            if (top_ > -1) {
                return data_[top_--];
            }
            return -1;
        }

        int top() {
            if (top_ > -1) {
                return data_[top_];
            }
            return -1;
        }

        ~Stack() {          // this is a destructor
            delete [] data_;
            cout << "Stack is being deleted" << endl;
        }
};

int main()
{
    Stack s;                        // Constructor is called here
    s.push(1);                      // Stack: 1
    s.push(2);                      // Stack: 1, 2
    s.push(3);                      // Stack: 1, 2, 3
    cout << s.pop() << endl;        // Stack: 3
    cout << s.pop() << endl;        // Stack: 2
    cout << s.pop() << endl;        // Stack: 1
    cout << s.pop() << endl;        // Stack: empty (nothing to pop)
    
    return 0;
}