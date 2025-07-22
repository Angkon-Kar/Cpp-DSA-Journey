// returning_values.cpp
// Topic: Returning Values from Functions

#include <iostream>
using namespace std;

// Function prototypes
int square(int n);                  // Returns the square of an integer
double average(double a, double b); // Returns average of two doubles
string getGreeting(string name);    // Returns a greeting message as a string

int main()
{
    // Calling square function
    int num = 6;
    int sq = square(num);
    cout << "Square of " << num << " is: " << sq << endl;

    // Calling average function
    double a = 8.5, b = 7.3;
    double avg = average(a, b);
    cout << "Average of " << a << " and " << b << " is: " << avg << endl;

    // Calling getGreeting function
    string name = "Bob";
    string message = getGreeting(name);
    cout << message << endl;

    return 0;
}

// Function that returns square of a number
int square(int n)
{
    return n * n;
}

// Function that returns average of two numbers
double average(double a, double b)
{
    return (a + b) / 2.0;
}

// Function that returns a greeting message
string getGreeting(string name)
{
    return "Hello, " + name + "! Welcome to C++ world.";
}

/*
    Output
    Square of 6 is: 36
    Average of 8.5 and 7.3 is: 7.9
    Hello, Bob! Welcome to C++ world.
*/