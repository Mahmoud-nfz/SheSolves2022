#include "bits/stdc++.h"
#include <algorithm>

using namespace std;
#define ll long long
#define nl '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   // freopen ("test04.in", "r", stdin);


    int t=1;
    cin>>t;
    while (t--) {
ll n,k;
cin>>n>>k;
ll sum=0;
        for (int i = 0; i < n; ++i) {
            ll x;
            cin>>x;
            sum+=x;
        }
        if(sum%k==0) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }



}
