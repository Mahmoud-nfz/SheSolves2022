#include <bits/stdc++.h>
 
/*###############
    Author => IronByte
###############*/
 
//#pragma GCC target ("avx2")
//#pragma GCC optimization ("O3")
//#pragma GCC optimization ("unroll-loops")
#define eps 1e-9
#define MOD1 998244353
#define MOD2 1000000007
#define INV_2 499122177
#define INF 1000000000
#define PI 3.14159265358979323846
#define pb push_back
#define rep(n) for(int i = 0; i < (n); i++);
#define all(x) (x).begin(),(x).end()

using namespace std;
typedef long long int ll; 


int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int ct;
    cin>>ct;
    while(ct--){
        int n;
        imp mp;
        cin >> n ;
        vector<int> v(n), v1;
        for(int i = 0; i < n; i++) { 
            cin >> v[i];
            mp[v[i]] = i;
        }
        for(int i = n; i > 0; i--) { 
            int ck;
            for(auto it : mp) {
                if( it.first == i) {
                    if(it.second == i) {
                        v1.pb(0);
                        ck = 0;
                    }
                    else {
                        v1.pb(it.second);
                        ck = i - it.second;
                    }
                }
            }
            for(int k = 1; k <= n; k++) {
                if(k <= i) {
                    if(mp[k] + ck <= i)
                        mp[k]+= ck;
                    else
                        mp[k] =(mp[k] + ck -i);
                }
            } 
        }
       for(int i = v1.size()-1; i > -1; i--)
            cout << v1[i] << " ";
        cout << endl;
    }

}
// size
// 07-02-46 
