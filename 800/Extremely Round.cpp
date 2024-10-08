#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

void runCases()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        vector<int> rounds = {1, 2, 3, 4, 5, 6, 7, 8, 9,
                              10, 20, 30, 40, 50, 60, 70, 80, 90,
                              100, 200, 300, 400, 500, 600, 700, 800, 900,
                              1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000,
                              10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000,
                              100000, 200000, 300000, 400000, 500000, 600000, 700000, 800000, 900000,
                              1000000, 2000000, 3000000, 4000000, 5000000, 6000000, 7000000, 8000000, 9000000,
                              10000000, 20000000, 30000000, 40000000, 50000000, 60000000, 70000000, 80000000, 90000000};
        
        int count = 0;

        for (int i = 0; i < rounds.size(); ++i)
            count += (rounds[i] <= n);

        cout << count << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    runCases();
    return 0;
}