#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &a: arr)
            cin >> a;

        int xorr = 0;

        for (auto &a : arr)
            xorr ^= a;

        if (n & 1) {
            cout << xorr << endl;
        }
        else {
            if (xorr != 0) {
                cout << -1 << endl;
            }
            else {
                cout << 1 << endl;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    runCases();
    return 0;
}