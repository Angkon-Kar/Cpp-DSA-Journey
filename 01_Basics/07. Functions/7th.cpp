// pass_by_value_reference.cpp
// Topic: Difference between Pass-by-Value and Pass-by-Reference

#include <iostream>
using namespace std;

// Function to increment value using pass-by-value (won't change original)
void incrementByValue(int x)
{
    x = x + 1;
    cout << "Inside incrementByValue: x = " << x << endl;
}

// Function to increment value using pass-by-reference (will change original)
void incrementByReference(int &x)
{
    x = x + 1;
    cout << "Inside incrementByReference: x = " << x << endl;
}

int main()
{
    int num = 5;

    cout << "Before incrementByValue: num = " << num << endl;
    incrementByValue(num);
    cout << "After incrementByValue: num = " << num << endl;

    cout << "\nBefore incrementByReference: num = " << num << endl;
    incrementByReference(num);
    cout << "After incrementByReference: num = " << num << endl;

    return 0;
}

/*
    Output
    Before incrementByValue: num = 5
    Inside incrementByValue: x = 6
    After incrementByValue: num = 5

    Before incrementByReference: num = 5
    Inside incrementByReference: x = 6
    After incrementByReference: num = 6
*/
