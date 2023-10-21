/********************************************
**
**   Author  : Vishnu Kumar Prajapati
**   Country : India
**
/*******************************************/

#include<bits/stdc++.h>
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
     ll mx = INT_MIN, mi = INT_MAX;
    ll n,m,c=0,i,j,k=0,p,q,r,x,y=0,sum=0;
    cin>>n;
    if(n%2!=0)cout<<"-1"<<endl;
    else{
        for(i=n; i>=1; i--)cout<<i<<" ";
        cout<<endl;
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