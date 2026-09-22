#include <iostream>
using namespace std;

#define MAX 10

class Stack{
    int top;

public:
    int a[MAX];
    Stack(){
        top = -1;
    }
    
    bool push(int x){
        if(top >= (MAX - 1)){
            cout << "Stack Overflow" << endl;
            return false;
        }
        else{
            a[++top] = x;
            return true;
        }
    }

    int pop(){
        if(top < 0){
            cout << "Stack Underflow" << endl;
            return 0;
        }
        else{
            int x = a[top--];
            return x;
        }
    }

    void display(){
        if(top < 0){
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        for(int i = top; i >= 0; i--){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}


int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    cout << "Popped element: " << s.pop() << endl;
    s.display();

    return 0;
}