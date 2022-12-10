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
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll s = 0;
        for (ll i = 0; i < n; i++)
        {
            s += a[i];
        }
        if ((s % k) == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
