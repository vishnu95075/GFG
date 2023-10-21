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
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n % 3 == 1) {
        cout << "YES\n";
        return;
    }

    bool fl = false;
    for (char i = 'a'; i <= 'z'; i++) {
        int f = n + 1, l = -1;
        for (int j = 0; j < n; j++) {
            if (j % 3 == 0 && s[j] == i) {
                f = j;
                break;
            }
        }
        for (int j = n - 1; j >= 0; j--) {
            int x = n - 1 - j;
            if (x % 3 == 0 && s[j] == i) {
                l = j;
                break;
            }
        }
        if (f < l) {
            fl = true;
            break;
        }
    }
    if (fl) {
        cout<<"YES\n";
    }
    else{
        cout<<"NO"<<endl;
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