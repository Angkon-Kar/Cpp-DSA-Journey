#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    char letter = 'A'; // Start's With 'A'

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << letter << " ";
            letter++; // Move to the next Letter
        }
        cout << endl;
    }
    return 0;
}

/*
    Output:
    A B C 
    D E F 
    G H I
*/