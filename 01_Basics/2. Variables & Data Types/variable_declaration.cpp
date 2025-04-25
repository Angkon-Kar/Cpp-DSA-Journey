/*
    variable_declaration.cpp – Using int, char, float, double, and bool
*/
#include <iostream>
using namespace std;

int main() {
    // Declaring different types of variables

    int age = 20;               // Integer type
    char grade = 'A';           // Character type
    float height = 5.7f;        // Float type (note the 'f' at the end)
    double pi = 3.14159;        // Double type (more precise than float)
    bool isPassed = true;       // Boolean type (true or false)

    // Printing the values
    cout << "Variable Declarations and Values:" << endl;
    cout << "int age = " << age << endl;
    cout << "char grade = " << grade << endl;
    cout << "float height = " << height << endl;
    cout << "double pi = " << pi << endl;
    cout << "bool isPassed = " << isPassed << endl;

    return 0;
}
