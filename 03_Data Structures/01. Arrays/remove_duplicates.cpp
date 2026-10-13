#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[j] != arr[i])
        {
            j++;
            arr[j] = arr[i];
        }
    }

    cout << "Array after removing duplicates: ";
    for (int i = 0; i <= j; i++)
    {
        cout << arr[i] << " ";
    }

    /*
    Output:
    Array after removing duplicates: 1 2 3 4
    */

    return 0;
}
