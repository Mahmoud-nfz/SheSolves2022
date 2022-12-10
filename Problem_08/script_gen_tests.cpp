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

       int t = randomInt(1, 100);
        
        for (int i = 0; i < t; i++)
        {
            ll n;
            n = randomInt(1, 100000);
            
            cout << n << endl;
            ll a[n];
            for (ll j = 0; j < n; j++)
            {
                a[i] = randomInt(1, 1000000001);
                a[i]-=1;
                if (a[i] == 0)
                    a[i] = -1;
            }
            for (ll j = 0; j < n; j++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
}
