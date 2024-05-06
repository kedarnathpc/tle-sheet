#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        string X, S;
        cin >> X >> S;

        bool flag = false;
        int count = 0;
        while (1) {
            if (X.find(S) != string::npos) {
                flag = true;
                break;
            }
            if (X.length() > (25 * S.length()) && X.find(S) == string::npos) {
                flag = false;
                break;
            }
            X += X;
            count++;
        }

        if (flag)
            cout << count << endl;
        else
            cout << -1 << endl;
    }
}   

int main() {
    runCases();
    return 0;
}