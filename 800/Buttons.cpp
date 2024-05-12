#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases() {
    int T;
    cin >> T;
    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;

        A += (C+1)/2;
        B += C/2;

        if (A > B)
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }
}

int main() {
    runCases();
    return 0;
}   