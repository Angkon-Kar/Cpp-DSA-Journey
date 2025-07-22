//  rotate_array.cpp (Rotate by 1 to the left)

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int first = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;

    cout << "Array after rotating left by 1: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    /*
    Output:
    Array after rotating left by 1: 2 3 4 5 1
    */

    return 0;
}
