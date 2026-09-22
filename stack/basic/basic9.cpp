#include <iostream>
#include <stack>
#include <string>
using namespace std;

string reverseString(string str) {
    stack<char> s;
    for (char c : str) s.push(c);
    
    string reversed = "";
    while (!s.empty()) {
        reversed += s.top();
        s.pop();
    }
    return reversed;
}

int main() {
    cout << "Reversed: " << reverseString("hello") << endl; // Prints "olleh"
    return 0;
}