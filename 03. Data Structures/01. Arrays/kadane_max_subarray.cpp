#include <iostream>
using namespace std;

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxSum = arr[0];
    int currSum = arr[0];

    for (int i = 1; i < n; i++)
    {
        currSum = max(arr[i], currSum + arr[i]);
        maxSum = max(maxSum, currSum);
    }

    cout << "Maximum subarray sum is: " << maxSum << endl;

    /*
    Output:
    Maximum subarray sum is: 6
    (Subarray: [4, -1, 2, 1])
    */

    return 0;
}
