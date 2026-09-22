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

    s.pop(); // Removes 40
    cout << "Top element after pop: " << s.top() << endl; // Prints 30

    s.pop(); // Removes 30
    cout << "Top element after pop: " << s.top() << endl; // Prints 20

    s.pop(); // Removes 20
    cout << "Top element after pop: " << s.top() << endl; // Prints 10

    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl;
    return 0;
}

/*
30 -> 3
40 -> 4
Top element after pop: 30
Top element after pop: 20
Top element after pop: 10
Is stack empty? No
*/