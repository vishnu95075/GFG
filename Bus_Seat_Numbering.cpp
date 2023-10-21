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
    int t;
    cin >> t;
    if (t <= 10) {
        cout << "Lower Double" << endl;
    } else if (t > 10 and t <= 15) {
        cout << "Lower Single" << endl;
    } else if (t > 15 and t <= 25) {
        cout << "Upper Double" << endl;
    } else if (t > 25 ) {
        cout << "Upper Single" << endl;
    }
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