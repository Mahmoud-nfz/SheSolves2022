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

int a[2005];
int tmp[2005];


int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    
    ll nb = 32768;
    int t = 1; 
    cin >> t; 
    std::vector<int> ans;
    while(t--) {
        int n; 
        cin >> n;
        ans.clear();
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            tmp[i] = a[i];
        } 
        for(int i = n; i >= 1; i--) {
            if (i == 1) 
                ans.pb(0); 
            else {
                int saver = i;
                for(int j = 1; j <= n; j++) {
                    if (a[j] == i) {
                        saver = j;
                        break;
                    }
                }
                if (saver != i) {
                    ans.pb(saver); 
                    int k = 1;
                    for(int j = saver + 1; j <= n; j++) {
                        if (a[j] > i)
                            break;
                        tmp[k] = a[j]; 
                        k++;
                    }
                    for(int j = 1; j <= saver; j++) {
                        tmp[k] = a[j];
                        k++;
                    }
                    for(int j = 1; j <= n; j++)
                        a[j] = tmp[j];
                } else {
                    ans.pb(0);
                }
            }
        }
        bool flag = false;
        for(int j = 1; j <= n - 1 && !flag; j++) {
            if (a[j + 1] - a[j] != 1)
                flag = true;
        }
        if (flag)
            cout << "-1\n"; 
        else {
            reverse(all(ans)); 
            for(auto u : ans)
                cout << u << " "; 
            cout << "\n";
        }

    }

}
// size
// 07-02-46 
