#include <iostream>
using namespace std;
int main()
{
    int age;
    char gender;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your gender (M/F): ";
    cin >> gender;
    if (age >= 18)
    {
        if (gender == 'M' || gender == 'm')
        {
            cout << "You are an adult male." << endl;
            if (age > 65)
            {
                cout << "You are also a senior citizen." << endl;
            }
        }
        else if (gender == 'F' || gender == 'f')
        {
            cout << "You are an adult female." << endl;
            if (age > 65)
            {
                cout << "You are also a senior citizen." << endl;
            }
        }
        else
        {
            cout << "Invalid gender entered." << endl;
        }
    }
    else
    {
        if (gender == 'M' || gender == 'm')
        {
            cout << "You are a minor male." << endl;
        }
        else if (gender == 'F' || gender == 'f')
        {
            cout << "You are a minor female." << endl;
        }
        else
        {
            cout << "Invalid gender entered." << endl;
        }
    }
    return 0;
}
