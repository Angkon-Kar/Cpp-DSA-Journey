#include <iostream>
using namespace std;

#define MAX 1000

class Stack {
    int top;
public:
    int a[MAX]; 
    Stack() { top = -1; }
    
    bool push(int x) {
        if (top >= (MAX - 1)) return false; // Stack Overflow
        a[++top] = x;
        return true;
    }
    
    int pop() {
        if (top < 0) return 0; // Stack Underflow
        return a[top--];
    }
    
    int peek() {
        if (top < 0) return 0;
        return a[top];
    }
    
    bool isEmpty() { return (top < 0); }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(50);
    s.push(90);
    cout << s.pop() << " popped from stack\n";
    return 0;
}