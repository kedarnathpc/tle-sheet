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
        vector<ll> A(N);
        for (int i = 0; i < N; ++i)
            cin >> A[i];

        if (!is_sorted(A.begin(), A.end())) {
            cout << 0 << endl;
            continue;
        }

        ll mini = LLONG_MAX;
        ll left = -1, right = -1;

        for (int i = 0; i < N-1; ++i) {
            if (A[i+1] - A[i] < mini) {
                mini = A[i+1]-A[i];
                left = A[i];
                right = A[i+1];
            }
        }

        if (mini == 0) {
            cout << 1 << endl;
            continue;
        }

        cout << (right - left + 2)/2 << endl;
    }   
}

int main() {
    runCases();
    return 0;
}