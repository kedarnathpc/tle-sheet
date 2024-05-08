#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<ll> A(N-1);
        for (int i = 0; i < N-1; ++i)
            cin >> A[i];

        ll res = accumulate(A.begin(), A.end(), 0);

        cout << -1 * res << endl;
    }   
}

int main() {
    runCases();
    return 0;
}