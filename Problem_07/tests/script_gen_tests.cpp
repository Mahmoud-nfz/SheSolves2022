#include <bits/stdc++.h>
using namespace std;

mt19937 rng(0);

int randomInt(int l, int r) { return uniform_int_distribution<int>(l, r)(rng); }

string randomString(int n, char l, char r) {
    int len = r - l + 1;
    string res;
    for (int i = 1; i <= n; ++i)
        res += char(l + randomInt(0, len - 1));
    return res;
}

int digitsNbr(int x) {
    if (x == 0) {
        return 1;
    }
    int ret{};
    while (x != 0) {
        ret++;
        x /= 10;
    }
    return ret;
}

int main() {
    const int tests = 15;
    const int width = digitsNbr(tests);
    for (int i = 1; i <=tests; ++i) {
        stringstream ss;
        const int testWidth = digitsNbr(i);
        string testNumber(width - testWidth, '0');
        char *testNumberStr = new char[testWidth + 1];
        sprintf(testNumberStr, "%d", i);
        testNumber += testNumberStr;
        ss << "test" << testNumber << ".in";
        delete[] testNumberStr;

        char fileName[20];
        ss >> fileName;
        freopen(fileName, "w", stdout);

        // ------------------------------------------ CHANGE THIS
        // 1 <= t <= 4000
        // 1 <= a,b,c <= 10,000,000
        int t = randomInt(1, 100);
        cout<<t<<'\n';
        for(int i=0;i<t;i++){
            int n, m;
            char tab[] = {'.','#'};
            n = randomInt(1, 100);
            m = randomInt(1, 100);
            cout << n << ' ' << m << endl;
            for(int j=0; j<n;j++){
                bool point=false;
                for(int k=0; k<m-1;k++){
                    if(!point){
                        if(randomInt(1, 2) == 1){
                            point=true;
                            cout << tab[0] ;
                        }else{
                            cout << tab[1] ;
                        }
                    }else{
                        cout << tab[1] ;
                    }
                }
                if(!point){
                    cout << tab[0] ;
                }else{
                    cout << tab[1] ;
                }
                cout << endl;
            }
        }
    }
}
