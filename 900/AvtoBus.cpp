#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

void runCases() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int mini, maxi;

        if (n & 1 || n == 2) { 
            cout << -1 << "\n";
        }
        else {  
            int maxi = n / 4;
            int mini;

            if (n % 6 == 0) {
                mini = (n / 6);
            }
            else if (n % 6 == 2) {
                mini = (n / 6) + 1;
            } 
            else if (n % 6 == 4) {
                mini = (n / 6) + 1;
            }

            cout << mini << " " << maxi << "\n";
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    runCases();
    return 0;
}