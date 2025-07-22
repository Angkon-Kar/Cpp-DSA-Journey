//  Square Pattern

#include <iostream>
using namespace std;

int main()
{
    int n, num = 1;
    cout << "Enter Number = ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}

/*
    Output
    Enter Number = 2
    1 2 
    3 4

    Enter Number = 3
    1 2 3 
    4 5 6
    7 8 9 
*/