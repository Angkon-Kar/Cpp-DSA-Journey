#include <iostream>
#include <string>
using namespace std;

int main()
{
    string greeting = "Hello";
    string name = "World";

    // Concatenation
    string message = greeting + ", " + name + "!";

    // Access characters
    char firstChar = message[0];

    // Update a character
    message[0] = 'h';

    cout << "Message: " << message << endl;
    cout << "First Character: " << firstChar << endl;

    return 0;
}

/*
Output:
Message: hello, World!
First Character: H
*/
