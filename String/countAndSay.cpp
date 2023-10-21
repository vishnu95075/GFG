/********************************************
**
**   Author  : Vishnu Kumar Prajapati
**   Country : India
**
/*******************************************/

// #include<bits/stdc++.h>
#include <iostream>
using namespace std;

#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

string countAndSay(int n) {
    if (n == 1) return "1";

    string s = countAndSay(n - 1);
    // deb2(s, n);
    
    int cnt = 1;

    string ans = "";
    // deb("After the ans : \n");
    // deb2(ans, s);

    for (int i = 0; i < s.size(); i++) {
        if (i < s.size() && s[i] == s[i + 1]) {
            cnt++;
        } else {
            ans += char(cnt + int('0'));
            ans += s[i];
            cnt = 1;
        }
    }
    return ans;
}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int codechef_testCase(30);
    // cin >> codechef_testCase;
    while(codechef_testCase--)
    cout << codechef_testCase<<":  "<<countAndSay(codechef_testCase) << endl;

    return 0;
}