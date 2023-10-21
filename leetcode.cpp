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
    ll n;
    cin>>n;

    vector<ll> a(n+1);

    for(ll i=1; i<=n; i++){
        cin>>a[i];
    }   

    int ans=0;

    for(ll i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            if(i<j && a[a[a[i]]]==a[a[a[j]]]){
                ans++;
            }
        }
    } 

    cout<<ans<<endl;

}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
   
    int codechef_testCase(1);
    cin >> codechef_testCase;
    while(codechef_testCase--) {
      codechefSolution();
    //   deb(codechef_testCase);
    }

    return 0;
}