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
   
  
    int n;
    cin>>n;

    int a[10000]={0};
    vector<int> v;

    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        v.push_back(t);  
        a[t]++;
    }
    vector<int> sa;

    for(int i=0; i<10000; i++){
       if(a[i]>0){
            sa.push_back(i);
       }
    }

    for(auto x:sa){
        cout<<x<<" "<<endl;
    }

    return 0;
}