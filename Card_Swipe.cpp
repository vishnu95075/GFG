/********************************************
**
**   Author  : Vishnu Kumar Prajapati
**   Country : India
**
/*******************************************/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define Sort(x) sort(all(x))
#define outpt(v) \
    for (auto i : v) cout << i << " ";
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define sti set<int>
#define mpii map<int, int>
#define pii pair<int, int>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define lop(i, N) for (int i = 0; i < N; i++)
#define loop(i, x, N) for (int i = x; i < N; i++)
#define mod % 1000000007

#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

void codechefSolution() {
    int n;
    cin >> n;
    set<int> s;
    int temp = 0;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;

        if (s.find(t) != s.end()) {
            s.erase(t);
        } else {
            s.insert(t);
        }
        int p = s.size();
        temp = max(temp, p);
    }
    std::cout << temp << endl;
}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int codechef_testCase(1);
    cin >> codechef_testCase;
    while (codechef_testCase--) {
        codechefSolution();
    }

    return 0;
}