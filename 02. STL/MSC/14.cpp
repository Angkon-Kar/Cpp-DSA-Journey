#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v(5, 10); // creates a vector of size 5 with all elements initialized to 10
    v.resize(3); // it resizes the vector to size 3, it removes the last 2 elements of the vector
    cout << v.size() << endl; // output: 3
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' '; // output: 10 10 10
    }
    
    return 0;
}