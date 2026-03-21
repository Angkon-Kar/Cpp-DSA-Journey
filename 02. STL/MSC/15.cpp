#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v(5, 10); // creates a vector of size 5 with all elements initialized to 10
    v.resize(6); // it resizes the vector to size 6, it adds 1 element with value 0
    cout << v.size() << endl; // output: 6
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' '; // output: 10 10 10 10 10 0
    }
    
    return 0;
}