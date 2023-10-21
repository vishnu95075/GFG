#include <bits/stdc++.h>
#define ll long long
#define llinf LLONG_MAX
#define llminf LLONG_MIN
#define inf INT_MAX
#define minf INT_MIN
const long long mod = 1e9 + 7;

using namespace std;

ll dp[1001][1001];
ll n, m, k;

ll rec(int i, int j) {
    if (i == n) return 1;
    if (dp[i][j] != -1) return dp[i][j];
    if (j == k) {
        return dp[i][j] = j * rec(i + 1, j) % mod;
    } else {
        return dp[i][j] = (j * rec(i + 1, j) % mod + (m - j) * rec(i + 1, j + 1) % mod) % mod;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m >> k;
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= k; j++) dp[i][j] = -1;
        rec(0, 0);
        cout << dp[0][0] << endl;
    }
}