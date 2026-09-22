#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v(5); // creates a vector of size 5 with all elements initialized to 0
    
    cout<<v.size()<<endl; // output: 5

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
    
    cout << endl;

    return 0;
}

// output:
// 5
// 0 0 0 0 0