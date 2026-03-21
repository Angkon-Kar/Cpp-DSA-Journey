#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v;

    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(11);
    v.push_back(13);
    v.pop_back(); // it removes the last element of the vector = 13
    v.pop_back(); // it removes the last element of the vector = 11
    
    cout << v.back() << endl; // output: 7
}