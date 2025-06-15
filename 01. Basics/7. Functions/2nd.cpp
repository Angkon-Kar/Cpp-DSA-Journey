// function_with_parameters.cpp
// Topic: Passing and Using Parameters in Functions

#include <iostream>
using namespace std;

// Function prototypes
void greetUser(string name);          // Function with a string parameter
int multiply(int a, int b);           // Function with two int parameters, returns result
void swapValues(int a, int b);        // Pass-by-value (won't change original values)
void swapByReference(int &a, int &b); // Pass-by-reference (will change original values)

int main()
{
    // Calling greetUser with a string argument
    greetUser("Alice");

    // Using multiply function and printing result
    int result = multiply(4, 5);
    cout << "Multiplication of 4 and 5 is: " << result << endl;

    // Demonstrating pass-by-value
    int x = 10, y = 20;
    cout << "Before swapValues (pass-by-value): x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swapValues (no change): x = " << x << ", y = " << y << endl;

    // Demonstrating pass-by-reference
    cout << "Before swapByReference: x = " << x << ", y = " << y << endl;
    swapByReference(x, y);
    cout << "After swapByReference: x = " << x << ", y = " << y << endl;

    return 0;
}

// Function Definitions

// Function that takes a name and greets the user
void greetUser(string name)
{
    cout << "Hello, " << name << "! Nice to meet you." << endl;
}

// Function that multiplies two numbers and returns the result
int multiply(int a, int b)
{
    return a * b;
}

// Pass-by-value function (won’t affect original variables)
void swapValues(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapValues: x = " << a << ", y = " << b << endl;
}

// Pass-by-reference function (will affect original variables)
void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

/*
    Output
    Hello, Alice! Nice to meet you.
    Multiplication of 4 and 5 is: 20
    Before swapValues (pass-by-value): x = 10, y = 20
    Inside swapValues: x = 20, y = 10
    After swapValues (no change): x = 10, y = 20
    Before swapByReference: x = 10, y = 20
    After swapByReference: x = 20, y = 10
*/