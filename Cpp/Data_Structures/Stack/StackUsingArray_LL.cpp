#include <iostream>
using namespace std;

class Stack {
    int *arr;       
    int capacity;   
    int top;        

public:
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    void push(int x) {
        if (top == capacity - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    int pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == capacity - 1;
    }
};

int main() {
    Stack st(4);

    st.push(1);
    st.push(8);
    st.push(27);
    st.push(64);

    cout << "Popped: " << st.pop() << "\n";

    cout << "Top element: " << st.peek() << "\n";

    cout << "Is stack empty: " << (st.isEmpty() ? "Yes" : "No") << "\n";

    cout << "Is stack full: " << (st.isFull() ? "Yes" : "No") << "\n";

    return 0;
}