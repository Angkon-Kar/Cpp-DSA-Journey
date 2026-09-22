#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int al = 0, bb = 0;
    int l = 0, r = n - 1;
    int mv = 0; // 0 = Alice, 1 = Bob

    while (l <= r) {
        int picked = 0;
        if (v[l] >= v[r]) {
            picked = v[l];
            l++;
        } else {
            picked = v[r];
            r--;
        }

        if (mv == 0) {
            al += picked;
        } else {
            bb += picked;
        }

        mv = 1 - mv; // চাল বদলানো
    }

    cout << al << " " << bb << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
/*
output:
4
4 1 2 10
12 5
*/