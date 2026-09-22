#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{1,2,3,4,5,6,7};
    v.insert(v.begin() + 2,{1,2}); // it inserts the elements 1 and 2 at index 2
    for (auto &x : v)
    {
        cout << x << ' '; // output: 1 2 1 2 3 4 5 6 7
    }
    return 0;
}