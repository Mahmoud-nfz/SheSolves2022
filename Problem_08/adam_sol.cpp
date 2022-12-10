#include "bits/stdc++.h"
#include <algorithm>

using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        set<ll> s;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] != -1)
                s.insert(a[i]);
        }
        ll ans = 0;
        if (n == 1)
        {
            ans = 1;
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i] == a[i + 1] && a[i] != -1)
                {
                    ans = -1;
                    break;
                }
            }
            if (ans == 0)
            {
                ans = max((int)s.size(), 2);
            }
        }
        cout << ans << endl;
    }
}
