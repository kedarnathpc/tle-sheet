#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
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

        for (int i = 0; i < n; ++i) {
            if (arr[i] == 1) {
                arr[i]++;
            }
        }

        for (int i = 0; i < n - 1; ++i) {
            while (arr[i + 1] % arr[i] == 0) {
                arr[i + 1]++;
            }
        }

        for (auto &a: arr)
            cout << a << " ";
        cout << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    runCases();
    return 0;
}
