#include <iostream>
using namespace std;

int main()
{
    // Declare an array of 5 integers
    int numbers[5];

    // Input elements into the array
    cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Display the elements of the array
    cout << "\nYou entered:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "numbers[" << i << "] = " << numbers[i] << endl;
    }

    // Calculate the sum of the array elements
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += numbers[i];
    }

    cout << "\nSum of array elements = " << sum << endl;

    return 0;
}

/*
    Output
    Enter 5 integers:
    Element 1: 10
    Element 2: 20
    Element 3: 30
    Element 4: 40
    Element 5: 50

    You entered:
    numbers[0] = 10
    numbers[1] = 20
    numbers[2] = 30
    numbers[3] = 40
    numbers[4] = 50

    Sum of array elements = 150



    Enter 5 integers:
    Element 1: 56
    Element 2: 5
    Element 3: 2
    Element 4: 88
    Element 5: 100

    You entered:
    numbers[0] = 56
    numbers[1] = 5
    numbers[2] = 2
    numbers[3] = 88
    numbers[4] = 100

    Sum of array elements = 251
*/