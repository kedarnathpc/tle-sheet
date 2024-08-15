#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases() {
    int T;
    cin >> T;
    while (T--) {
        ll n, k, x;
        cin >> n >> k >> x;

        ll low = (k * (k + 1)) / 2;
        ll last = n - k;
        ll high = ((n * (n + 1)) / 2) - ((last * (last + 1)) / 2);

        if (x >= low && x <= high)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    runCases();
    return 0;
}