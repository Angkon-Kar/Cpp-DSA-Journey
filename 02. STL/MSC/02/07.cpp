#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector<int>v{1,3,11,6,8,11,9};
    cout << count(v.begin(),v.end(), *max_element(v.begin(),v.end())) << endl;
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
The code counts the occurrences of the maximum element in the vector using `count` and prints the result.
*/