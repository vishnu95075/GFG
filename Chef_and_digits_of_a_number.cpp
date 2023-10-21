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


void codechefSolution() {
    string s;
    cin>>s;
    int cnt0=0,cnt1=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='1') cnt1++;
        else cnt0++;
    }
    if(cnt0==1 || cnt1==1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
   
    int codechef_testCase(1);
    cin >> codechef_testCase;
    while(codechef_testCase--) {
      codechefSolution();
    }

    return 0;
}