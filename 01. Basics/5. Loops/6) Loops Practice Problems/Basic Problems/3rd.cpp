/*
     Program to add only positive numbers.
*/

#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0;

    cout << "Enter a number (negative to stop): ";
    cin >> number;

    while (number >= 0)
    {
        sum += number;
        cout << "Enter a number (negative to stop): ";
        cin >> number;
    }

    cout << "The sum is " << sum << endl;
    return 0;
}

/*
    Output
    Enter a number (negative to stop): 5
    Enter a number (negative to stop): 10
    Enter a number (negative to stop): 0
    Enter a number (negative to stop): -1
    The sum is 15
*/