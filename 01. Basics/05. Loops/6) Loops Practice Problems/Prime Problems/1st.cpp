/*
     Write a program to check if a given number is prime or not.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not a Prime" << endl;
        }
    }
    if (i == n)
    {
        cout << "Prime Number!" << endl;
    }
    return 0;
}

/*
    Output = 
    Enter a Number: 17
    Prime Number!
    Enter a Number: 21
    Not a Prime
    Enter a Number: 14
    Not a Prime
    Enter a Number: 7
    Prime Number!
 */