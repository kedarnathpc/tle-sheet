#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        stack<char> st;
        bool alice = false;

        for (auto &c: s) {
            if (!st.empty() && st.top() != c)
                st.pop(), alice = !alice;
            else
                st.push(c);
        }

        cout << (alice ? "DA" : "NET") << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    runCases();
    return 0;
}