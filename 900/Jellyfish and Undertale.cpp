#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases() {
    int T;
    cin >> T;
    while (T--) {
        ll a, b, n;
        cin >> a >> b >> n;

        vector<ll> tools(n);
        for (int i = 0; i < n; ++i)
            cin >> tools[i];

        ll time = 0;

        for (auto &t: tools) {
            time += min(a - 1, t);
        }

        cout << time + b << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    runCases();
    return 0;
}