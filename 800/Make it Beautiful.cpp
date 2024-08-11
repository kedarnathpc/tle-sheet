#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &a: arr)
            cin >> a;
        
        int count = 1;
        for (int i = 1; i < n; ++i)
            if (arr[i] == arr[0])
                count++;

        if (count == n) {
            cout << "NO" << endl;
            continue;
        }

        int i = 0, j = n - 1;
        
        cout << "YES" << endl;

        while (i <= j) {
            if (i == j) {
                cout << arr[i] << " ";
            }
            else {
                cout << arr[i] << " " << arr[j] << " ";
            }
            i++, j--;
        }

        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    runCases();
    return 0;
}