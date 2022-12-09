#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t; cin >> t;
    while(t--) {
        ll size;
        cin >> size;
        ll sequence[size];
        for (ll i = 0; i < size; ++i) {
            cin >> sequence[i];
        }
        ll sum = sequence[0];
        bool found = false;
        for (ll k = 1; k < size-1; ++k) {
            sum += sequence[k];
            if((sequence[k]*k < sum) && (sum <= k*sequence[k+1])){
                cout << k ;
                found = true;
                break;
            }
        }
        if(!found){
            cout << -1;
        }

        cout << endl;
    }
    return 0;
}
