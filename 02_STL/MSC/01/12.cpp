#include <bits/stdc++.h>
using namespace std;

int fun()
{
    return 10;
}

int main() {
    vector<int>v(5, fun()); // creates a vector of size 5 with all elements initialized to the return value of fun() which is 10
    cout << v.size() << endl; // output: 5
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' '; // output: 10 10 10 10 10
    }
    
    return 0;
}
