//  nested If

#include <iostream>
using namespace std;

int main()
{

    int number;
    cout << "Enter any number here = ";
    cin >> number;

    if (number > 0)
    { // First level of decision
        cout << "The number is positive." << endl;

        if (number % 2 == 0)
        { // Second level of decision
            cout << "The number is even." << endl;
        }

        else
        {

            cout << "The number is odd." << endl;
        }

        if (number > 50)
        { // Another second level of decision
            cout << "The number is greater than 50." << endl;
        }

        else
        {
            cout << "The number is 50 or less." << endl;
        }
    }
    else if (number < 0)
    {
        cout << "The number is negative." << endl;
    }
    else
    {
        cout << "The number is zero." << endl;
    }
    return 0;
}
