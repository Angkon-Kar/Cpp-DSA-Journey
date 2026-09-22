#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector<int>v{1,3,11,6,8,9};
    int mx= max_element(v.begin(),v.end()) - v.begin();
    cout << mx << endl;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    solve();
    return 0;
}

/*
Output: 2
*/

/*
Explanation:
The code finds the index of the maximum element in the vector. The maximum element is 11, which is at index 2 (0-based indexing).
*/