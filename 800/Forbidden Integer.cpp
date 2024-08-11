#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

bool solve(int i, int target, vector<int>& arr, vector<int>& result) {
    if (target == 0) return true;  
    if (i < 0 || target < 0) return false;  

    result.push_back(arr[i]);
    if (solve(i, target - arr[i], arr, result))
        return true;

    result.pop_back();

    return solve(i - 1, target, arr, result);
}

void runCases() {
    int T;
    cin >> T;
    while (T--) {
        int n, k, x;
        cin >> n >> k >> x;

        vector<int> arr;

        for (int i = 1; i <= k; ++i)
            if (i != x)
                arr.push_back(i);

        vector<int> result;

        if (solve(arr.size() - 1, n, arr, result)) {
            cout << "YES" << endl;
            cout << result.size() << endl;  
            for (auto& r : result)
                cout << r << " ";
            cout << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    runCases();
    return 0;
}
