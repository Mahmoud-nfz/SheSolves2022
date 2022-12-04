#include <bits/stdc++.h>  
using namespace std;
#define ll long long

ll somme (ll premierTerme,ll dernierTerme){
    return (dernierTerme-premierTerme+1)*(premierTerme+dernierTerme)/2;
}
int main() {
    int t; cin >> t;
    while(t--) {
        ll a0,an,sum,begin, end;
        bool res = true;
        cin >> a0 >> an; // READING THE INPUTS a0 > 0
        sum = somme(a0,an); // CALCULATING THE SUM OF THE SEQUENCE (FROM a0 to an)
        begin = sum / an;
        end = sum / (an+1);

        cout << " sum :" << sum  << endl ;

        for (ll i = begin; i < end+2; ++i) {
            if( ((long double)sum/i <= (an+1)) && ((long double)sum/i > an) ){ // OUTPUTING THE RESULT IF IT EXISTS
                cout << i;
                res = false;
                break;
            }
        }
        if(res)
            cout << "NO";
        cout << endl;
    }
    return 0;
}
