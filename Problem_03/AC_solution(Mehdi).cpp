#include "bits/stdc++.h"
#include <algorithm>

using namespace std;
#define ll long long
#define nl '\n'

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        if ((y == 0) && (((m/x) < n))) {
            cout << "-1" << nl;
        }
        else {
            int ans = (n * (x + y)) - m;

            cout <<max(ans,0) << endl;
        }

    }
}