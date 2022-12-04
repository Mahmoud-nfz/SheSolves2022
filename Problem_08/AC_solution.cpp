#include <bits/stdc++.h>  
using namespace std;


void solve(){
    int n ;
    cin >> n ;
    int a[n] ;
    set<int> colors ;
    for(int i = 0; i < n; i ++){
        cin >> a[i] ;
        if(a[i] != -1)
            colors.insert(a[i]) ;
    }
    if(n == 1){
        cout << 1 << endl ;
        return ;
    }
    for(int i = 1; i < n; i ++){
        if(a[i] == a[i-1] && a[i] != -1){
            cout << -1 << endl ;
            return ;
        }
    }
    cout << max(2,(int)colors.size()) << endl ;
}
int main() {
    int t; cin >> t;
    while(t--) {
        solve() ;
    }
    return 0;
}
