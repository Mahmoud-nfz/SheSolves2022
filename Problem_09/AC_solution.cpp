#include <bits/stdc++.h>  
using namespace std;

int main() {
    int Xc,Yc,Sc;
    int Xk,Yk,Sk;
    int Xh,Yh;
    cin >> Xc >> Yc >> Sc;
    cin >> Xk >> Yk >> Sk;
    cin >> Xh >> Yh;
    if( sqrt((Xk-Xh)*(Xk-Xh)+(Yk-Yh)*(Yk-Yh))/ (float)Sk >=  sqrt((Xc-Xh)*(Xc-Xh)+(Yc-Yh)*(Yc-Yh))/(float)Sc ) cout << "YES";
    else cout << "NO";
    return 0;
}
