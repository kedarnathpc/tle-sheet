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

        int sum = accumulate(arr.begin(), arr.end(), 0);
        int neg = count(arr.begin(), arr.end(), -1);
        int pos = count(arr.begin(), arr.end(), 1);
        int product = 1;
        int cnt = 0;

        for (auto &a : arr)
            product *= a;

        if (sum >= 0 && product == 1) {
            cout << 0 << endl;
            continue;
        }

        int i = 0;
        if (sum < 0) {
            while (i < n && accumulate(arr.begin(), arr.end(), 0) < 0) {
                if (arr[i] == -1) {
                    cnt++;
                    arr[i] = 1;
                }
                i++;
            }
        }

        product = 1;
        for (auto &a : arr)
            product *= a;

        if (product == -1)
            cnt++;

        cout << cnt << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    runCases();
    return 0;
}