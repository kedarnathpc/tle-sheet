#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

void runCases() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &a: arr)
            cin >> a;

        int left = -1, right = -1;

        for (int i = 0; i < n; ++i) {
            if (arr[i] != 0) {
                if (left == -1 && right == -1) {
                    left = right = i;
                }
                else {
                    right = i;
                }
            }
        }

        if (left == -1 && right == -1) {
            cout << 0 << "\n";
        }
        else {
            bool found = false;
            for (int i = left; i <= right; ++i) {
                if (arr[i] == 0) {
                    found = true;
                    break;
                }
            }

            if (found)
                cout << 2 << "\n";
            else
                cout << 1 << "\n";
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    runCases();
    return 0;
}