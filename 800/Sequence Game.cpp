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
        vector<int> B(N);
        for (int i = 0; i < N; ++i)
            cin >> B[i];

        vector<int> A;
        A.push_back(B[0]);

        for (int i = 1; i < N; ++i) {
            if (A.back() > B[i]) {
                A.push_back(B[i]);
                A.push_back(B[i]);
            }
            else
                A.push_back(B[i]);
        }

        cout << A.size() << endl;
        for (int i = 0; i < A.size(); ++i)
            cout << A[i] << " ";
        cout << endl;
    }  
}

int main() {
    runCases();
    return 0;
}