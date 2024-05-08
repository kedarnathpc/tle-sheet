#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; ++i)
            cin >> A[i];

        if (count(A.begin(), A.end(), K) == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }   
}

int main() {
    runCases();
    return 0;
}