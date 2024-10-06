#include<bits/stdc++.h>
using namespace std;

class Stack
{
    deque<int> dq;
public:
    // Default constructor.
    Stack() {
        
    }

    // Pushes 'x' into the stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x)
    {
        dq.push_back(x);
        return true;  // Since deque always allows insertion, it returns true.
    }

    // Pops top element from Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop()
    {
        if (dq.empty())
            return -1;
        
        int val = dq.back();
        dq.pop_back();
        return val;
    }

    // Returns the topmost element of the stack. In case the stack is empty, it returns -1.
    int top()
    {
        if (dq.empty())
            return -1;
        else
            return dq.back();
    }

    // Returns true if the stack is empty, otherwise false.
    bool isEmpty()
    {
        return dq.empty();
    }

    // Returns the number of elements currently present in the stack.
    int size()
    {
        return dq.size();
    }
};
 
int main()
{
    Stack s;

    // Test pushing elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Test stack top
    cout << "Top element: " << s.top() << endl;  // Output: 30

    // Test stack size
    cout << "Stack size: " << s.size() << endl;  // Output: 3

    // Test popping elements
    cout << "Popped element: " << s.pop() << endl;  // Output: 30
    cout << "Popped element: " << s.pop() << endl;  // Output: 20

    // Test stack size after pop
    cout << "Stack size after popping: " << s.size() << endl;  // Output: 1

    // Test top after popping
    cout << "Top element after popping: " << s.top() << endl;  // Output: 10

    // Test isEmpty
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;  // Output: No

    // Test popping until empty
    cout << "Popped element: " << s.pop() << endl;  // Output: 10
    cout << "Popped element from empty stack: " << s.pop() << endl;  // Output: -1

    // Final check if stack is empty
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;  // Output: Yes

    return 0;
}
