#include <iostream>
using namespace std;

// Array প্রিন্ট করার জন্য হেল্পার ফাংশন
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// ১. Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++)      
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1]) // পাশাপাশি দুটি এলিমেন্ট চেক
                swap(arr[j], arr[j+1]); // বামেরটা বড় হলে জায়গা বদল
}

// ২. Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        // আনসর্টেড অংশ থেকে সবচেয়ে ছোট ভ্যালু খোঁজা
        for (int j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        // ছোট ভ্যালুটাকে সামনে নিয়ে আসা
        swap(arr[min_idx], arr[i]);
    }
}

// ৩. Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        // key-এর চেয়ে বড় ভ্যালুগুলোকে এক ঘর ডানে সরানো
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        // সঠিক জায়গায় key বসানো
        arr[j + 1] = key;
    }
}

// ৪. Quick Sort - Partition Function (ভাগ করার কাজ)
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // শেষের এলিমেন্টকে পিভট ধরলাম
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) { // পিভটের চেয়ে ছোট হলে বামে রাখো
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]); // পিভটকে সঠিক জায়গায় বসানো
    return (i + 1);
}

// ৪. Quick Sort - মূল ফাংশন
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // পিভট ইনডেক্স বের করা
        quickSort(arr, low, pi - 1); // পিভটের বাম পাশ সর্ট
        quickSort(arr, pi + 1, high); // পিভটের ডান পাশ সর্ট
    }
}

int main() {
    cout << "--- Sorting Algorithms Demonstration ---" << endl;

    // ১. Bubble Sort Test
    int arr1[] = {64, 25, 12, 22, 11};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    cout << "\nOriginal Array (Bubble Sort): "; printArray(arr1, n1);
    bubbleSort(arr1, n1);
    cout << "Sorted Array: "; printArray(arr1, n1);

    // ২. Selection Sort Test
    int arr2[] = {29, 10, 14, 37, 13};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    cout << "\nOriginal Array (Selection Sort): "; printArray(arr2, n2);
    selectionSort(arr2, n2);
    cout << "Sorted Array: "; printArray(arr2, n2);

    // ৩. Insertion Sort Test
    int arr3[] = {12, 11, 13, 5, 6};
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    cout << "\nOriginal Array (Insertion Sort): "; printArray(arr3, n3);
    insertionSort(arr3, n3);
    cout << "Sorted Array: "; printArray(arr3, n3);

    // ৪. Quick Sort Test
    int arr4[] = {10, 7, 8, 9, 1, 5};
    int n4 = sizeof(arr4)/sizeof(arr4[0]);
    cout << "\nOriginal Array (Quick Sort): "; printArray(arr4, n4);
    quickSort(arr4, 0, n4 - 1);
    cout << "Sorted Array: "; printArray(arr4, n4);

    return 0;
}