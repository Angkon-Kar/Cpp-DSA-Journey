#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int price[size];

    //  Input
    for (int i = 0; i < size; i++)
    {
        cin >> price[i];
    }

    //  Output
    for (int i = 0; i < size; i++)
    {
        cout << price[i] << endl;
    }

    return 0;
}

/*
Output
40 45 10 100 30
40
45
10
100
30
*/