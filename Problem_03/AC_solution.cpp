#include <bits/stdc++.h>  
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll n, m, x, y;
        cin >> n >> m >> x >> y;
        if ((y == 0) && (((m/x) < n))) {
            cout << "-1" << endl;
        } else {
            ll ans = (n * (x + y)) - m;
            if(ans<0)
                ans=0;
            cout << ans << endl;
        }
    }
}
