#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 3, 5};
    int b[] = {2, 4, 6};
    int n = 3, m = 3;
    int merged[n + m];

    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            merged[k++] = a[i++];
        }
        else
        {
            merged[k++] = b[j++];
        }
    }

    while (i < n)
        merged[k++] = a[i++];
    while (j < m)
        merged[k++] = b[j++];

    cout << "Merged sorted array: ";
    for (int x = 0; x < n + m; x++)
    {
        cout << merged[x] << " ";
    }

    /*
    Output:
    Merged sorted array: 1 2 3 4 5 6
    */

    return 0;
}
