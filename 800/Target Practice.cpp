#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases() {
    int T;
    cin >> T;
    while (T--) {
        vector<vector<char>> board(10, vector<char>(10));
        ll sum = 0;

        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                cin >> board[i][j];
                if (board[i][j] == 'X') {
                    if (i == 0 || i == 9 || j == 0 || j == 9)
                        sum += 1;
                    else if (i == 1 || i == 8 || j == 1 || j == 8)
                        sum += 2;
                    else if (i == 2 || i == 7 || j == 2 || j == 7)
                        sum += 3;
                    else if (i == 3 || i == 6 || j == 3 || j == 6)
                        sum += 4;
                    else
                        sum += 5;
                }
            }
        }

        cout << sum << endl;
    }   
}

int main() {
    runCases();
    return 0;
}