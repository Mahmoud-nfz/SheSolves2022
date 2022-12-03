#include <iostream>  

using namespace std;
string Filter(const string &to){
    string final;
    for(string::const_iterator it = to.begin(); it != to.end(); ++it)
        if((*it >= '0' && *it <= '9'))
            final += *it;
    return final;
}

int main() {
    int t; cin >> t;
    while(t--) {
        string s;
        cin>>s;
        s = Filter(s);
        if(s.size()==8&&(s[0]=='2'||s[0]=='5'||s[0]=='9')) cout<<s<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
