//  Samallest / Largest in Array

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int nums[] = {2, 5, 10, -25, 75};
    int size = 5;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }

    cout << "Smallest Value = " << smallest << endl;
    cout << "Largest Value = " << largest << endl;

    return 0;
}

/*
    Output
    Smallest Value = -25
    Largest Value = 75
*/