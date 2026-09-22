#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedListStack {
    Node* top;
public:
    LinkedListStack() { top = nullptr; }
    
    void push(int x) {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = top;
        top = newNode;
    }
    
    void pop() {
        if (top == nullptr) return;
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    
    int peek() {
        if (top != nullptr) return top->data;
        return -1;
    }
};

int main() {
    LinkedListStack s;
    s.push(10);
    s.push(20);
    cout << "Top element: " << s.peek() << endl;
    s.pop();
    cout << "Top after pop: " << s.peek() << endl;
    return 0;
}