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

        // ------------------------------------------ ALREADY DONE ! DON'T CHANGE ANYTHING
        
        int testCases = randomInt(1, 100);
        cout << testCases << endl; //OUTPUTING THE NUMBER OF TESTCASES        
        for (int i = 0; i < testCases; i++) {
            int sequenceSize = randomInt(1, 1000); //OUTPUTING THE SEQUENCE SIZE
            cout << sequenceSize << endl;
            int lastRandomNumber = 1;
            for (int j = 0; j < sequenceSize-1; j++) { //FOR LOOP TO OUTPUT THE SEQUENCE
                lastRandomNumber = randomInt(lastRandomNumber+1, lastRandomNumber+10);
                cout << lastRandomNumber << ' '; //OUTPUTING EACH SEQUENCE NUMBER
            }
            cout << randomInt(lastRandomNumber+1, lastRandomNumber+10) << endl;//OUTPUTING LAST SEQUENCE NUMBER
        }
    }
}
