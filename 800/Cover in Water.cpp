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
        string cells;
        cin >> cells;

        int dots = 0, count = 0;
        bool flag = false;
        for (int i = 0; i < N; ++i) {
            if (cells[i] == '.') {
                dots++;
                count++;
                if (dots >= 3) {
                    flag = true;
                }
            }
            else {
                dots = 0;
            }
        }  

        if (flag)
            cout << 2 << endl;
        else
            cout << count << endl;
    }   
}

int main() {
    runCases();
    return 0;
}