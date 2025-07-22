#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int num = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    cout << "After Pattern= '" << num << "'" << endl;
    return 0;
}

/*
    Output:
    1 2 3
    4 5 6
    7 8 9
    After Pattern= '10'
*/