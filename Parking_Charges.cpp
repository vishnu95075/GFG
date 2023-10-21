/********************************************
**
**   Author  : Vishnu Kumar Prajapati         
**   Country : India                          
**                                            
/*******************************************/

// #include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<cmath>
#include<map>

using namespace std;
#define ll long long

#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl



signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


   long long x,y,h;
    cin>>x>>y>>h;

    cout<<(h-1) * y + x<<endl;



    return 0;
}