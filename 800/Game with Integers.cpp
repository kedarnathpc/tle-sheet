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

        bool flag = false;
        int vanya = 10;
        while (vanya--) {
            if ((N+1)%3 == 0 || (N-1)%3 == 0)
                flag = true;
            if (N%3 == 2)
                N--;
            if (N%3 == 1)
                N++;
        }

        if (flag)
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }   
}

int main() {
    runCases();
    return 0;
}