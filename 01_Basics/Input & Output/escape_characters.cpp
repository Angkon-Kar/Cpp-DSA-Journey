// escape_characters.cpp
// Demonstrates usage of escape characters like \n, \t, \", \', \\ and endl

#include <iostream>
using namespace std;

int main() {
    // Newline using \n
    cout << "This is the first line.\n";
    cout << "This is the second line using \\n.\n";

    // Newline using endl
    cout << "This is the third line using endl." << endl;
    cout << "This is the fourth line." << endl;

    // Tab character \t
    cout << "\nUsing tab character \\t:\n";
    cout << "Name\t:\tJohn Doe\n";
    cout << "Age\t:\t20\n";
    cout << "Country\t:\tBangladesh\n";

    // Using double quote and single quote escape
    cout << "\nUsing quotes:\n";
    cout << "He said, \"C++ is awesome!\"\n";  // \" to escape double quote
    cout << "It\'s a beautiful day.\n";        // \' to escape single quote

    // Using backslash \\
    cout << "\nDisplaying a file path:\n";
    cout << "C:\\Users\\Username\\Documents\\file.txt\n";  // \\ to print backslash

    return 0;
}
