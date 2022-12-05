#include <bits/stdc++.h>  
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {

        int a[28] ;
        for(int i = 0 ; i < 28 ; i ++){
            a[i] = 0 ;
        }
        int n ; cin >> n ;
        for(int i = 0 ; i < n ; i ++){
            char c ;
            cin >> c ;
            a[c-'A'] ++ ;
        }
        int m = *max_element(a,a+28) ;
        int cnt = 0 ;
        for(int i = 0 ; i < 28 ; i ++){
            if(a[i] == m)
                cnt ++ ;
        }
        if(cnt > 1){
            cout << "#" << endl ;
        }
        else{
            cout << (char) (max_element(a,a+28) - a + 'A') << endl ;
        }

    }
    return 0;
}
