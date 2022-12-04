    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long

    int main() {
        int t; cin >> t;
        while(t--) {
            ll a0,an,sum=0,begin, end;
            bool res = true;
            cin >> a0 >> an; // READING THE INPUTS a0 > 0
            for (ll i = a0; i < an+1 ; ++i) { // CALCULATING THE SUM OF THE SEQUENCE (FROM a0 to an) //HERE THE TLE
                sum+=i;
            }
            begin = sum / an;
            end = sum / (an+1);
            for (ll i = begin; i < end+2; ++i) {// OUTPUTING THE RESULT IF IT EXISTS
                if( ((long double)sum/i > (an+1)) ){
                    break;
                }else if( ((long double)sum/i > an) ){
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
