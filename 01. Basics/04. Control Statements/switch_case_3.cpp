//  Write a program to find whether an alphabet is a vowel or a consonant.

#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter an alphabet: ";
    cin >> c;

    switch (c)
    {
    case 'a':
        cout << "It is a Vowel" << endl;
        break;
    case 'e':
        cout << "It is a Vowel" << endl;
        break;
    case 'i':
        cout << "It is a Vowel" << endl;
        break;
    case 'o':
        cout << "It is a Vowel" << endl;
        break;
    case 'u':
        cout << "It is a Vowel" << endl;
        break;
    case 'A':
        cout << "It is a Vowel" << endl;
        break;
    case 'E':
        cout << "It is a Vowel" << endl;
        break;
    case 'I':
        cout << "It is a Vowel" << endl;
        break;
    case 'O':
        cout << "It is a Vowel" << endl;
        break;
    case 'U':
        cout << "It is a Vowel" << endl;
        break;

    default:
        cout << "It is a Consonant" << endl;
        break;
    }
}