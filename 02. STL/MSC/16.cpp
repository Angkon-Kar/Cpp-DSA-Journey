#include <bits/stdc++.h>
using namespace std;    

int main() {
    vector<int>v(5);
    vector::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << ' '; // output: 0 0 0 0 0
    }
    
    return 0;
}