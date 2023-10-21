/********************************************
**
**   Author  : Vishnu Kumar Prajapati
**   Country : India
**
/*******************************************/

// #include<bits/stdc++.h>
#include <iostream>
#include<cmath>
using namespace std;
#define ll long long

#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

void codechefSolution() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i + 1; j < n; j++) {
            if (i != j) {
                sum = +a[i] - a[j];
                int diff = a[j] - a[i];
                if (diff != sum) {
                    cnt++;
                }
            }
        }
    }

    cout << cnt << endl;
}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


    cout<<sqrt(8)<<endl;

    cout<<ceil(3.4)<<" "<<ceil(3.8)<<" "<<ceil(3.0)<<endl;


    return 0;
}