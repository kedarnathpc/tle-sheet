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
        for (auto &a : arr)
            cin >> a;

        int count = 0, i = 1;

        while (i < n) {
            while (i < n && (arr[i] % 2 == arr[i - 1] % 2)) {
                i++, count++;
            }
            i++;
        }

        cout << count << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    runCases();
    return 0;
}