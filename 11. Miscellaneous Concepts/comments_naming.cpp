//  comments_naming.cpp – Good naming conventions & comment

#include <iostream>
using namespace std;

// This function calculates the square of a number
int calculateSquare(int number) {
    return number * number; // return the square
}

int main() {
    int userInput;
    cout << "Enter a number: ";
    cin >> userInput;

    int result = calculateSquare(userInput); // meaningful variable names
    cout << "Square: " << result << endl;

    /*
    Sample Input:
    Enter a number: 7

    Output:
    Square: 49
    */

    return 0;
}

/*
Notes on good practices:
- Function names: use camelCase or snake_case (e.g., calculateSquare)
- Variable names: should be descriptive (e.g., userInput, result)
- Comment styles: use // for single-line
*/