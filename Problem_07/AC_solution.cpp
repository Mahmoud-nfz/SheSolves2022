#include <bits/stdc++.h>  
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {

        int n, m; cin >> n >> m;
        int prev = 0 ;
        int ans = 0 ;
        for(int i = 0 ; i < n ; i ++){
            string s ;
            cin >> s ;
            for(int j = 0 ; j < s.size(); j ++){
                if(s[j] == '.'){
                    ans += abs(j-prev) ;
                    prev = j ;
                }
            }
        }
        cout << ans << endl ;

    }
    return 0;
}
