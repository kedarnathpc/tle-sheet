#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases() {
    int T;
    cin >> T;
    while (T--) {
        ll n;
        cin >> n;

        if (n & 1) {
            cout << 1 << endl;
            continue;
        }
        else {
            int i = 1;
            while (true) {
                if (n % i != 0) {
                    cout << i - 1 << endl;
                    break;
                }
                i++;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    runCases();
    return 0;
}