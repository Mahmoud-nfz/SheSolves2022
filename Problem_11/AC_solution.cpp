#include <bits/stdc++.h>  
using namespace std;

int main() {
    long long t,n,f,c,k,d; cin >> t;
    while(t--) {
        cin >> n >> f >> c >>k;
        d = 1;
        for(long long i = n ; i > 0 ; i /=2)
        {
            while( ( (n+(d+i)*c-1)/((d+i)*c) ) * k > f) d+=i;
        }
        cout << d+1 << endl;
    }
    return 0;
}
