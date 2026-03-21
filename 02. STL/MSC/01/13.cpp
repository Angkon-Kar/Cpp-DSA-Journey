#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v(5, 10); // creates a vector of size 5 with all elements initialized to 10
    v.assign(3,11); // assigns 3 elements with value 11
    cout << v.size() << endl; // output: 3
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' '; // output: 11 11 11
    }
    
    return 0;
}