#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases() {
    int T;
    cin >> T;
    while (T--) {
        int a, b;
        cin >> a >> b;

        int xk, yk;
        cin >> xk >> yk;

        int xq, yq;
        cin >> xq >> yq;

        int pos = 0;

        set<pair<int,int>> st1, st2;

        int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

        for (int i = 0; i < 4; ++i) {
            st1.insert({xk + dx[i] * a, yk + dy[i] * b});
            st1.insert({xk + dx[i] * b, yk + dy[i] * a});
            st2.insert({xq + dx[i] * a, yq + dy[i] * b});
            st2.insert({xq + dx[i] * b, yq + dy[i] * a});
        }

        for (auto &s : st1) {
            if (st2.find(s) != st2.end()) {
                pos++;
            }
        }

        cout << pos << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    runCases();
    return 0;
}