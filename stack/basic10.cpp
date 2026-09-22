#include <iostream>
using namespace std;

int stackArr[10];
int top = -1;

void push(int value) {
    if (top == 9) {
        cout << "Stack overflow!" << endl;
        return;
    }
    top++;
    stackArr[top] = value;
}

void pop() {
    if (top == -1) {
        cout << "Stack underflow!" << endl;
        return;
    }
    cout << "Removed= " << stackArr[top] << endl;   
    top--;
}

void display() {
    if (top == -1) {
        cout << "Stack is empty!" << endl;
        return;
    }
    cout << "Stack elements: ";
    for (int i = top; i >= 0; i--) {
        cout << stackArr[i] << " ";
    }
    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    display();

    pop();
    display();

    pop();
    display();
    
    return 0;
}