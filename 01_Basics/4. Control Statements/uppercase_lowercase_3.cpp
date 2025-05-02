//  Program to check if an alphabet is a vowel or a consonant.

#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter an alphabet: ";
    cin >> ch;

    // Check if input is an alphabet
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        // Convert uppercase to lowercase for easier comparison
        char lowerCh = tolower(ch);

        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u')
        {
            cout << ch << " is a vowel.";
        }
        else
        {
            cout << ch << " is a consonant.";
        }
    }
    else
    {
        cout << "Invalid input. Please enter an alphabet.";
    }

    return 0;
}

/*

💡 How It Works:
Checks whether the input is a valid alphabet.

Converts to lowercase to avoid checking both cases.

Uses if-else to determine if the character is a vowel (a, e, i, o, u) or a consonant.


✅ Example Outputs:

🔤 Input: A
Enter an alphabet: A
A is a vowel.

🔤 Input: b
Enter an alphabet: b
b is a consonant.

❌ Input: 5
Enter an alphabet: 5
Invalid input. Please enter an alphabet.

*/