/********************************************
**
**   Author  : Vishnu Kumar Prajapati         
**   Country : India                          
**                                            
/*******************************************/

// #include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl


void codechefSolution() {
    int a,b;
    cin>>a>>b;
     int t  = a/10;
     a = a - t;

    if(a<b){
        cout<<"ONLINE"<<endl;
    }
    else if(b<a){
        cout<<"DINING"<<endl;
    }
    else if(a==b){
        cout<<"EITHER"<<endl;
    }

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