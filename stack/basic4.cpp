#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int>s;
    
    s.push(10); // Adds 10
    s.push(20); // Adds 20
    s.push(30); // Adds 30

    cout << s.top() << " -> " << s.size() << endl; // Prints 30 -> 3
    
    s.push(40); // Adds 40
    cout << s.top() << " -> " << s.size() << endl; // Prints 40 -> 4


    s.push(99); // Adds 99

    while(!s.empty()){
        s.pop(); // Removes 99, 40, 30, 20, 10
    }

    if(s.empty()){
        cout << "Stack is Empty" << endl;
    } else {
        cout << "Stack is not Empty" << endl;
    }
    return 0;
}

/*
30 -> 3
40 -> 4
Stack is Empty
*/