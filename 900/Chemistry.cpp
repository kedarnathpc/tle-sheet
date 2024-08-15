#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases() {
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> chars(26, 0);

        for (int i = 0; i < n; ++i)
            chars[s[i] - 'a']++;

        int odd = 0;

        for (auto &c: chars)    
            if (c & 1)
                odd++;

        if (odd > k + 1)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;  
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    runCases();
    return 0;
}