#include <bits/stdc++.h>  
using namespace std;

int main() {
    double Xc,Yc,Sc;
    double Xk,Yk,Sk;
    double Xh,Yh;
    cin >> Xc >> Yc >> Sc;
    cin >> Xk >> Yk >> Sk;
    cin >> Xh >> Yh;
    if( sqrt((Xk-Xh)*(Xk-Xh)+(Yk-Yh)*(Yk-Yh))/ Sk >=  sqrt((Xc-Xh)*(Xc-Xh)+(Yc-Yh)*(Yc-Yh))/ Sc ) cout << "YES";
    else cout << "NO";

    return 0;
}
