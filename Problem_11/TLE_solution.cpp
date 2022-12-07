#include <bits/stdc++.h>  
using namespace std;

int main() {
    long long t,n,f,c,k,d; cin >> t;
    while(t--) {
        cin >> n >> f >> c >>k;
        d = 1;
        while( ( (n+d*c-1)/(d*c) ) * k > f) d++;
        cout << d << endl;
    }
    return 0;
}
