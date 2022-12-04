#include <bits/stdc++.h>  
using namespace std;
#define ll long long

ll somme (ll premierTerme,ll dernierTerme){
    return (dernierTerme-premierTerme+1)*(premierTerme+dernierTerme)/2;
}
int main() {
    int t; cin >> t;
    while(t--) {
        ll a0,an,sum,test,res;
        cin >> a0 >> an; // READING THE INPUTS a0 > 0
        sum = somme(a0,an); // CALCULATING THE SUM OF THE SEQUENCE (FROM a0 to an)
        test = sum / an;
        if((long double)sum/test <= an)
            res = test-1;
        else if((long double)sum/test > an+1)
            res = test+1;
        else
            res = test;

        if( ((long double)sum/res <= an+1) && ((long double)sum/res > an) ){ // OUTPUTING THE RESULT
            cout << res ;
        }else{
            cout << "NO";
        }

        cout << endl;
    }
    return 0;
}
