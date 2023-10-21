/********************************************
**
**   Author  : Vishnu Kumar Prajapati
**   Country : India
**
/*******************************************/

// #include<bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;
#define ll long long

#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

void codechefSolution() {
    int n, x;
    cin >> n >> x;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int c = -1;
    for (int i = 0; i < n; i++) {
        deb2(a[i], x);
        deb((a[i] & x));
        cout << endl;
        if ((a[i] & x) == x) {
            c &= a[i];
        }
    }
    if (c == x)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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