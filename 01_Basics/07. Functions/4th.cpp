// function_overloading.cpp
// Topic: Function Overloading – Same name, different parameters

#include <iostream>
using namespace std;

// Function Overloading Examples
void display();                     // No parameters
void display(int a);                // One integer parameter
void display(string name, int age); // String and int parameters

int main()
{
    // Calling different overloaded versions of display()
    display();
    display(42);
    display("Alice", 21);

    return 0;
}

// Definition of display() with no parameters
void display()
{
    cout << "Hello! This is a basic display function." << endl;
}

// Definition of display() with one int parameter
void display(int a)
{
    cout << "The number is: " << a << endl;
}

// Definition of display() with string and int parameters
void display(string name, int age)
{
    cout << "Name: " << name << ", Age: " << age << endl;
}

/*
    Output
    Hello! This is a basic display function.
    The number is: 42
    Name: Alice, Age: 21
*/
