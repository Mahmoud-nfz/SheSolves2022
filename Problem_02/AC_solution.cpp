#include <bits/stdc++.h>  
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {

        int n, k; cin >> n >> k;
        int a[n] ;
        int sum = 0 ;
        for(int i = 0; i < n; i ++){
            cin >> a[i] ;
            sum += a[i] ;
        }
        if(sum % k == 0)
            cout << "YES\n" ;
        else
            cout << "NO\n" ;

    }
    return 0;
}
