#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {5, 10, 15, 20, 25};
    int *ptr = arr;

    cout << "Accessing array using pointer:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    return 0;
}

/*
Output:
Accessing array using pointer:
5 10 15 20 25
*/
