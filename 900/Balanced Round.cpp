#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> arr(n);
        for (auto &a: arr)
            cin >> a;

        sort(arr.begin(), arr.end());

        vector<ll> differences;

        for (ll i = 1; i < n; ++i) {
            differences.push_back(arr[i] - arr[i - 1]);
        }

        int count = 1;
        int maxi = 1;

        for (ll i = 0; i < differences.size(); ++i) {
            if (differences[i] <= k) {
                count++;
                maxi = max(maxi, count);
            } else {
                count = 1;
            }
        }

        cout << n - maxi << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    runCases();
    return 0;
}
