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
        for (auto &a : arr)
            cin >> a;

        int len = 0;
        int cnt = 0;

        for (int i = 0; i < n; ++i) {
            if (arr[i] == 0) {
                cnt++;
                len = max(len, cnt);
            }
            else {
                cnt = 0;
            }
        }

        cout << len << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    runCases();
    return 0;
}