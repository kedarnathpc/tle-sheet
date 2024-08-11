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
        
        int twos = count(arr.begin(), arr.end(), 2);

        if (twos % 2 == 1) {
            cout << -1 << endl;
            continue;
        }
        else {
            int half = twos / 2;
            int i = 1;
            while (i <= n && half) {
                if (arr[i - 1] == 2) {
                    half--;
                    if (half == 0) {
                        break;
                    }
                }
                i++;
            }
            cout << i << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    runCases();
    return 0;
}