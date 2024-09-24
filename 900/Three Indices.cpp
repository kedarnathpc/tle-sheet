#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &a: arr)
            cin >> a;

        int a = -1, b = -1, c = -1;

        for (int j = 1; j < n - 1; ++j) {
            int i = j - 1;
            int k = j + 1;
            while (i >= 0 && arr[i] >= arr[j])
                i--;
            while (k < n && arr[k] >= arr[j])
                k++;
            if (i != -1 && k != n) {
                a = i, b = j, c = k;
                break;
            }
        }

        if (a == -1 || b == -1 || c == -1)
            cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            cout << a + 1 << " " << b + 1 << " " << c + 1 << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    runCases();
    return 0;
}