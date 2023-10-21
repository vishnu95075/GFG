/********************************************
**
**   Author  : Vishnu Kumar Prajapati
**   Country : India
**
/*******************************************/

// #include<bits/stdc++.h>
#include <iostream>
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

void codechefSolution(bool f) {
    string s;
    cin >> s;
    if (f) {
        if (s[0] == 'O' && s[1] == 'O')
            s[0] = '+', s[1] = '+';
        else if (s[3] == 'O' && s[4] == 'O')
            s[3] = '+', s[4] = '+';
    }
}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool f = true;
    for (auto &s : a) {
        if (f) {
            if (s[0] == 'O' && s[1] == 'O') {
                s[0] = '+', s[1] = '+';
                f = false;
            }

            else if (s[3] == 'O' && s[4] == 'O') {
                s[3] = '+', s[4] = '+';
                f = false;
            }

            //   deb2(s,f);
        }
    }

    if (f) {
        no;
    } else {
        yes;
        for (auto s : a) {
            cout << s << endl;
        }
    }

    return 0;
}