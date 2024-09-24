#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        if (n & (n - 1))
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