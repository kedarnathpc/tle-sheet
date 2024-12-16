#include <bits/stdc++.h>
using namespace std;
#define ll long long
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

        int gcd = abs(arr[0] - 1);

        for (int i = 1; i < n; ++i)
            if (arr[i] - (i + 1) != 0)
                gcd = abs(__gcd(gcd, arr[i] - (i + 1)));

        cout << gcd << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    runCases();
    return 0;
}