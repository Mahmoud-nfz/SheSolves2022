#include <bits/stdc++.h>
#define ll long long
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
        
        int testCases = randomInt(1, 100);
        cout << testCases << nl; //OUTPUTING THE NUMBER OF TESTCASES        
        for (int i = 0; i < testCases; i++) {
            int sequenceSize = randomInt(1, 100000); //OUTPUTING THE SEQUENCE SIZE
            cout << sequenceSize << nl;
            ll lastRandomNumber = 1;
            for (int j = 0; j < sequenceSize-1; j++) { //FOR LOOP TO OUTPUT THE SEQUENCE
                lastRandomNumber = randomInt(lastRandomNumber, 99999);
                cout << lastRandomNumber << ' '; //OUTPUTING EACH SEQUENCE NUMBER
            }
            cout << 100000 << nl;//OUTPUTING LAST SEQUENCE NUMBER
        }
    }
}
