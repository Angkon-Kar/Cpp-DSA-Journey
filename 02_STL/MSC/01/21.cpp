#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v{1,2,3,4,5,6,7};
    v.insert(v.begin() + 2, 10); // it inserts the value 10 at index 2
    cout << v.size() << endl; // output: 8
    for (auto &x : v)
    {
        cout << x << ' '; // output: 1 2 10 3 4 5 6 7
    }
    return 0;
}