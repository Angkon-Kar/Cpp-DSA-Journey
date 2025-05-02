#include <iostream>
using namespace std;
int main()
{
    int age;
    cin >> age;
    if (age >= 18)
    {
        cout << "You can vote.";
    }
    else
    {
        cout << "Not eligible for voting.";
    }
    return 0;
}

/*
    20
    You can vote.

    18
    You can vote.

    15
    Not eligible for voting.
*/