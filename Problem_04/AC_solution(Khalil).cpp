#include <bits/stdc++.h>  
#define ll long long

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
        vector<ll> possible;
        for (int i = 0; i < n && a[i] <= a[k-1]; ++i) {
            possible.push_back(a[i].second);
        }
        
        sort(possible.begin(),possible.end());
        assert(possible.size()>=k);

        ll ans =0 , x= a[k-1].first;        
        for (int i = 0; i < k; ++i) {
            ans+=possible[i];
        }

        cout<<x<<" "<<ans<<endl;
    }
}
