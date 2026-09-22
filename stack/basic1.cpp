#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int>s;
    
    s.push(10); // Adds 10
    s.push(20); // Adds 20
    s.push(30); // Adds 30
    
    cout << "Top element is: " << s.top() << endl; // Prints 30
    
    s.pop(); // Removes 30
    cout << "Top element after pop: " << s.top() << endl; // Prints 20
    
    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl;
    return 0;
}