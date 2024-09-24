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

        if (n & 1) {
            cout << 4 << endl;
            cout << 1 << " " << n - 1 << endl;
            cout << 1 << " " << n - 1 << endl;
            cout << n - 1 << " " << n << endl;
            cout << n - 1 << " " << n << endl;
        }
        else {
            cout << 2 << endl;
            cout << 1 << " " << n << endl;
            cout << 1 << " " << n << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    runCases();
    return 0;
}