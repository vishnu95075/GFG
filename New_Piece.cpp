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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = 0;
    if (a % 2 and c % 2) {
      
    } else {
        ans++;
    }
    if (b % 2 and d % 2) {
     
    } else {
        ans++;
    }
     if (a % 2 and d % 2) {
      
    } else {
        ans++;
    }
    if (b % 2 and c % 2) {
       
    } else {
        ans++;
    }

    cout<<ans<<endl;
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