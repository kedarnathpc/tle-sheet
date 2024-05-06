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
        vector<ll> arr(N);
        for (int i = 0; i < N; ++i)
            cin >> arr[i];

        bool flag = false;
        if (K > 1)
            flag = true;
        if (is_sorted(arr.begin(), arr.end()))
            flag = true;
        if (K > 1 && is_sorted(arr.rbegin(), arr.rend()))
            flag = true;
        
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main() {
    runCases();
    return 0;
}