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

        vector<ll> B,C;

        ll maxi = *max_element(A.begin(), A.end());

        for (int i = 0; i < N; ++i) {
            if (A[i] == maxi)
                C.push_back(A[i]);
            else
                B.push_back(A[i]);
        }
        
        if (B.empty() || C.empty()) {
            cout << -1 << endl;
            continue;
        }

        cout << B.size() << " " << C.size() << endl;
        for (auto &i : B)
            cout << i << " ";
        cout << endl;
        for (auto &i : C)
            cout << i << " ";
        cout << endl;
    }   
}

int main() {
    runCases();
    return 0;
}