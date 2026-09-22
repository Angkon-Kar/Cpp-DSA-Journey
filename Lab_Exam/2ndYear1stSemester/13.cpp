#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Target found at index i
        }
    }
    return -1; // Target not found
}

int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Target found at index mid
        }
        else if (arr[mid] < target) {
            left = mid + 1; // Search in the right half
        }
        else {
            right = mid - 1; // Search in the left half
        }
    }
    return -1; // Target not found
}

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    // Linear Search
    int linearResult = linearSearch(arr, n, target);
    if (linearResult != -1) {
        cout << "Linear Search: Element " << target << " found at index: " << linearResult << endl;
    } else {
        cout << "Linear Search: Element " << target << " not found in the array." << endl;
    }

    // Binary Search
    int binaryResult = binarySearch(arr, n, target);
    if (binaryResult != -1) {
        cout << "Binary Search: Element " << target << " found at index: " << binaryResult << endl;
    } else {
        cout << "Binary Search: Element " << target << " not found in the array." << endl;
    }

    return 0;
}