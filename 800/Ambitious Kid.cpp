#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        if (A[i] < 0)
            A[i] *= -1;
    }

    int mini = *min_element(A.begin(), A.end());

    cout << mini << endl;
}

int main() {
    runCases();
    return 0;
}   