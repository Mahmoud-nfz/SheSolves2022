#include "bits/stdc++.h"
#include <algorithm>

using namespace std;
#define ll long long
#define nl '\n'

int main() {
    freopen("test04.in","r",stdin);
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    map<int,set<int>> m;
    set<int> s1=    {0,3,5,6,8,9};set<int> s2=    {1,7};set<int> s3=    {2};set<int> s4=    {4};
    m[0]=s1;
    m[1]=s2;
    m[3]=s1;
    m[4]=s4;
    m[5]=s1;
    m[6]=s1;
    m[7]=s2;
    m[2]=s3;
    m[8]=s1;
    m[9]=s1;
    while (t--) {
        bool f= true;
        string a,b;
        int n;
        cin>>n;
        cin>>a>>b;
        for (int i = 0; i < n; ++i) {
            int x,y;
            string d="",dd="";
            d+=a[i];
            dd+=b[i];
            x=stoi(d);
            y=stoi(dd);
            if(m[x].count(y)==0) {f= false; break;}
        }
        if(f) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
}