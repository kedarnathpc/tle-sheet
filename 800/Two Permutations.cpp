#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases() {
    int T;
    cin >> T;
    while (T--) {
        ll n, a, b;
        cin >> n >> a >> b;

        if (n == a && a == b) {
            cout << "Yes" << endl;
            continue;
        }
        
        if ((a + b) <= n - 2)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    runCases();
    return 0;
}