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
        
        unordered_map<ll,ll> mp;
        for (auto &i : A)
            mp[i]++;
        
        if (mp.size() > 2) {
            cout << "NO" << endl;
            continue;
        }

        if (mp.size() == 1) {
            cout << "YES" << endl;
            continue;
        }

        bool flag = false;
        for (auto &i : mp) {
            if (i.second < N/2) {
                flag = true;
                break;
            }
        }

        if (flag)
            cout << "NO" << endl;
        else 
            cout << "YES" << endl;
    }   
}

int main() {
    runCases();
    return 0;
}