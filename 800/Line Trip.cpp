#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        vector<ll> stations(N);
        for (int i = 0; i < N; ++i)
            cin >> stations[i];
        
        ll maxDiff = stations[0];

        for (int i = 1; i < N; ++i)
            maxDiff = max(maxDiff, stations[i] - stations[i-1]);
        
        maxDiff = max(maxDiff, 2 * (X - stations[N-1]));

        cout << maxDiff << endl;
    }   
}

int main() {
    runCases();
    return 0;
}