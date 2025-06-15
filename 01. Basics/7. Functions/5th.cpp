// default_arguments.cpp
// Topic: Default Values in Function Parameters

#include <iostream>
using namespace std;

// Function declaration with default arguments
void introduce(string name, int age = 18, string country = "Unknown");

int main()
{
    // Calling with all arguments
    introduce("John", 25, "USA");

    // Calling with only name and age, country defaults to "Unknown"
    introduce("Emily", 30);

    // Calling with only name, age and country default values are used
    introduce("Alex");

    return 0;
}

// Function definition
void introduce(string name, int age, string country)
{
    cout << "Name: " << name << ", Age: " << age << ", Country: " << country << endl;
}

/*
    Output
    Name: John, Age: 25, Country: USA
    Name: Emily, Age: 30, Country: Unknown
    Name: Alex, Age: 18, Country: Unknown
*/
