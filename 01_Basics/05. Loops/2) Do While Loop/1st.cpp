#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    do
    {
        cout << n << endl;
        cin >> n;
    } while (n > 0);
    return 0;
}

/*
    Input =
    5
    3
    2
    1
    0

    Output =
    5
    3
    2
    1
*/