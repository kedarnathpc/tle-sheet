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
        string s;
        cin >> s;

        int consecutiveGreater = 1, consecutiveLesser = 1;
        int count = 1;

        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == '<' && s[i] == s[i + 1]) {
                count++;
                consecutiveLesser = max(consecutiveLesser, count);
            }
            else
                count = 1;
        }

        count = 1;
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == '>' && s[i] == s[i + 1]) {
                count++;
                consecutiveGreater = max(consecutiveGreater, count);
            }
            else
                count = 1;
        }

        cout << max(consecutiveGreater, consecutiveLesser) + 1 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    runCases();
    return 0;
}