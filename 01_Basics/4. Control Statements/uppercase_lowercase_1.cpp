//  uppercase_lowercase_1.cpp

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter Charecter = ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "Lowercase" << endl;
    }
    else
    {
        cout << "Uppercase" << endl;
    }

    return 0;
}