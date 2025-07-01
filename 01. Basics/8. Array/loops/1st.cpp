#include <iostream>
using namespace std;

int main()
{

    int price[5] = {40, 45, 10, 100, 30};
    int size = 5;

    //  loops: 0 to size-1
    for (int i = 0; i < size; i++)
    {
        cout << price[i] << endl;
    }

    return 0;
}

/*
Output
40
45
10
100
30
*/