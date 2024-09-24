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

        ll count2 = 0, count3 = 0;

        while (n % 2 == 0)
            n /= 2, count2++;

        while (n % 3 == 0)
            n /= 3, count3++;

        if (n == 1 && count2 <= count3)
            cout << (count3 - count2) + (count3) << endl;
        else
            cout << -1 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    runCases();
    return 0;
}