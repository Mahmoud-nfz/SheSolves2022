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
        ll v[28] = {0};
        for (ll i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            v[c - 65]++;
        }
        ll mx = *max_element(v, v + 28), a = 0;
        char ch;
        for (ll i = 0; i < 28; i++)
        {
            if (mx == v[i])
            {
                a++;
                ch = i + 65;
            }
        }
        if (a > 1)
            cout << "#" << endl;
        else
        {
            cout << ch << endl;
        }
    }
}
