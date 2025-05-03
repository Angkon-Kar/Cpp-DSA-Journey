#include <iostream>
using namespace std;
int main()
{
    int x = 0;
    cout << "Enter any Number = ";
    cin >> x;
    if (x > 10)
    {
        cout << "The number is greater than 10!";
    }
    else
    {
        cout << "The number is less than 10!!";
    }
    return 0;
}

/*
    Enter any Number = 21
    The number is greater than 10!

    Enter any Number = 5
    The number is less than 10!!

    Enter any Number = 10
    The number is less than 10!!
*/