#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases() {
    int T;
    cin >> T;
    while (T--) {
        int x, k;
        cin >> x >> k;

        if (x % k == 0) {
            cout << 2 << endl;
            cout << x - 1 << " " << 1 << endl;
        }
        else {
            cout << 1 << endl << x << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    runCases();
    return 0;
}