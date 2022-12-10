#include <bits/stdc++.h>
using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

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
    const int tests = 40;
    const int width = digitsNbr(tests);
    for (int i = 4; i <=4+tests; ++i) {
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
        int t = randomInt(1, 500);
        cout << t << endl;
        for(int i=0;i<t;i++){
            int a = randomInt(1, 1000);
            cout << a << endl;
            int k=1;
            vector<int> tab;
            std::vector<int>::iterator it;
            tab.push_back(randomInt(1,a));
            while(k < a ){
                int randomTableElement = randomInt(1,a);
                it =std::find(tab.begin(), tab.end(), randomTableElement);
                while (it != tab.end()){
                    randomTableElement = randomInt(1,a);
                    it =std::find(tab.begin(), tab.end(), randomTableElement);
                }
                tab.push_back(randomTableElement);
                k++;
            }
            for (int j = 0; j < tab.size()-1; ++j) {
                cout << tab[j] << ' ';
            }
            cout << tab[tab.size()-1] << endl;
        }
    
    }
}
