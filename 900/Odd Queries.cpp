#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases() {
    int t;
    cin >> t;
    while (t--) {
        ll n, q;
        cin >> n >> q;
        vector<ll> arr(n); 
        for (auto &a: arr)
            cin >> a;

        vector<vector<ll>> queries(q, vector<ll>(3));
        for (auto &q: queries)
            cin >> q[0] >> q[1] >> q[2];

        vector<ll> prefixSum(n);
        prefixSum[0] = arr[0];
        for (int i = 1; i < n; ++i)
            prefixSum[i] = arr[i] + prefixSum[i - 1];

        ll sum = accumulate(arr.begin(), arr.end(), 0LL);

        for (auto &q: queries) {
            ll left = q[0] - 1;  
            ll right = q[1] - 1;

            ll subarraySum = prefixSum[right] - (left > 0 ? prefixSum[left - 1] : 0);

            ll newSum = sum - subarraySum + ((right - left + 1) * q[2]);

            if (newSum % 2 == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    runCases();
    return 0;
}
