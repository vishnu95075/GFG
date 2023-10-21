/********************************************
**
**   Author  : Vishnu Kumar Prajapati
**   Country : India
**
/*******************************************/

#include <bits/stdc++.h>
// #include<iostream>
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

signed main() {
    stack<int> s;
    s.push(3);
    s.push(4);
    s.push(8);
    s.push(32);

    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
}