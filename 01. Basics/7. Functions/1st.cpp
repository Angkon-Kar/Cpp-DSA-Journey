// function_basics.cpp
// Topic: Defining and Calling Functions in C++

#include <iostream>
using namespace std;

// Function Declaration (also called function prototype)
void greet();            // A function with no parameters and no return value
int add(int a, int b);   // A function that takes two integers and returns their sum
void printSquare(int n); // A function that takes an integer and prints its square

// Main function - Entry point of the program
int main()
{
    // Calling the greet function
    greet();

    // Calling the add function and storing the result
    int result = add(10, 20);
    cout << "Sum of 10 and 20 is: " << result << endl;

    // Calling the printSquare function
    printSquare(5);

    return 0;
}

// Function Definitions

// Simple function that prints a message
void greet()
{
    cout << "Hello! Welcome to function basics in C++." << endl;
}

// Function that returns the sum of two numbers
int add(int a, int b)
{
    return a + b;
}

// Function that prints the square of a number
void printSquare(int n)
{
    cout << "Square of " << n << " is: " << (n * n) << endl;
}

/*
    Output
    Hello! Welcome to function basics in C++.
    Sum of 10 and 20 is: 30
    Square of 5 is: 25
*/