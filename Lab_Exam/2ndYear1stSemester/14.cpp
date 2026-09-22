#include <iostream>
#include <vector>
#include <list>

using namespace std;


class HashTable{
    int BUCKET; // Number of buckets
    vector<list<int>> table; // Vector of lists to store the hash table
public:
    HashTable(int V){
        BUCKET = V;
        table.resize(BUCKET);
    }

    void insertItem(int key){
        int index = key % BUCKET; // Hash function
        table[index].push_back(key);
    }

    void displayHash(){
        for(int i = 0; i < BUCKET; i++){
            cout << "Bucket " << i << ": ";
            for(auto x : table[i]){
                cout << "-> " << x << " ";
            }
            cout << endl;
        }
    }
};



int main(){
    int arr[] = {15, 11, 27, 8, 12};
    int n = sizeof(arr)/sizeof(arr[0]);

    HashTable h(7); // Create a hash table with 7 buckets
    for(int i = 0; i < n; i++){
        h.insertItem(arr[i]);
    }
    h.displayHash();
    return 0;
}