#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;

    cout << "Enter a number: ";
    cin >> target;

    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            index = i;
        }
        
    }
    
    cout << "Index: " << index << endl;
    

    return 0;
}