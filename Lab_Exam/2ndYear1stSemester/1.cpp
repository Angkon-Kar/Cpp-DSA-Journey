#include <iostream>
using namespace std;

void traverse(int arr[], int size){
    cout<<"Array: ";
    for(int i = 0; i < size; i++){
        cout<<arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;

    traverse(arr, n);

    int pos = 2, val = 25;
    for(int i = n; i > pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = val;
    n++;

    cout << "After Insertion: ";
    traverse(arr, n);


    int delpos = 3;
    for (int i = delpos; i < n-1; i++){
        arr[i] = arr[i+1];
    }
    n--;
    cout << "After Deletion: ";
    traverse(arr, n);


    int target = 40, found = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            found = i;
            break;
        }
    }
    if(found != -1){
        cout << "Element " << target << " found at index: " << found << endl;
    }
    else{
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
    
}