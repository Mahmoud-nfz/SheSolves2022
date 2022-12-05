#include <bits/stdc++.h>  
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        pair<ll,ll>a[n];
        for (int i = 0; i < n; ++i) {
            cin>>a[i].first;
        }
        for (int i = 0; i < n; ++i) {
            cin>>a[i].second;
        }
        sort(a,a+n);
        int x=a[k-1].first;
        priority_queue<ll>v;
        int i=0;
        while(a[i].first<=x&&i<n){
            v.push(a[i].second);
            i++;
        }
        ll ans=0;
        while(k){
            ll w=v.top();
            v.pop();
            ans+=w;
            k--;
        }
        cout<<x<<" "<<ans<<nl;
    }
}
