#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v(5); // creates a vector of size 5 with all elements initialized to 0
    v.push_back(9); // it adds 9 at the end of the vector
    cout<<v.size()<<endl; // output: 6

    for (int i = 0; i < v.size(); i++)
    {
        v[i] = 10; // it assigns 10 to each element of the vector
        cout << v[i] << ' ';
    }
    return 0;
}

// output:
// 6
// 10 10 10 10 10 10