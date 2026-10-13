/*

❓Question:
Write a C++ program that displays a menu with two options:

Coffee

Tea

The program should take the user's choice as input and then display a corresponding message:

If the user enters 1, print "Your Coffee is on the way. Thank You!"

If the user enters 2, print "Your Tea is on the way. Thank you!"

If the user enters any other number, print "You have entered a wrong option."

*/

#include <iostream>
using namespace std;
int main()
{
    int choice = 0;
    cout << "1 for Coffee." << endl
         << "2 for Tea." << endl
         << "Enter = ";
    cin >> choice;
    if (choice == 1)
    {
        cout << "Your Coffee is on the way. Thank You!";
    }
    else if (choice == 2)
    {
        cout << "Your Tea is on the way. Thank you!";
    }
    else
    {
        cout << "You have entered a wrong option.";
    }
    return 0;
}

/*
    Possible Outputs:


    👉 Input: 1
    1 for Coffee.
    2 for Tea.
    Enter = 1
    Your Coffee is on the way. Thank You!

    👉 Input: 2
    1 for Coffee.
    2 for Tea.
    Enter = 2
    Your Tea is on the way. Thank you!

    👉 Input: 5 (or any other number)
    1 for Coffee.
    2 for Tea.
    Enter = 5
    You have entered a wrong option.

*/