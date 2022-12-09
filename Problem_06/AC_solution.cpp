#include <bits/stdc++.h>  
using namespace std;
vector<vector<int>> connections = {
    {0,3,5,6,8,9},
    {1,7},
    {2},
    {0,3,5,6,8,9},
    {4},
    {0,3,5,6,8,9},
    {0,3,5,6,8,9},
    {1,7},
    {0,3,5,6,8,9},
    {0,3,5,6,8,9}
};
int main() {
    int t,n;
    bool ok;
    cin >> t;
    string s1,s2;
    while(t--) {
        cin >>n;
        cin >>s1;
        cin >>s2;
        ok = true;
        for(int i = 0 ; i < n ; ++i)
        {
            if( find(connections[s1[i]-'0'].begin(), connections[s1[i]-'0'].end(),s2[i]-'0') ==  connections[s1[i]-'0'].end())
            {
                cout << "NO" << endl;
                ok = false;
                break;
            }
        }
        if(ok) cout << "YES" << endl;
    }
    return 0;
}

