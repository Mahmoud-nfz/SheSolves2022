#include <bits/stdc++.h>
using namespace std;
#define nl endl;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   // freopen ("test04.in", "r", stdin);

    int di[] = {1, -1, 0, 0, 1, -1, 1, -1};
    int dj[] = {0, 0, 1, -1, 1, -1, -1, 1};

    int t=1;
    cin>>t;
    while (t--) {

        int n;
        cin>>n;
        map<char,int> m;
        for (int i = 0; i < n; ++i) {
            char c;
            cin>>c;
            if(m.count(c)==0) m.insert(make_pair(c,1));
            else m[c]++;
        }
        int mx=-1;
        for (auto p:m) {
            mx=max(mx,p.second);

        }
        set<char> s;
        for (auto p:m) {if(p.second==mx) s.insert(p.first);

        }
        if(s.size()==1) {cout<<*s.begin()<<nl;}
        else cout<<"#"<<nl;
    }



}