/********************************************
**
**   Author  : Vishnu Kumar Prajapati         
**   Country : India                          
**                                            
/*******************************************/

#include<bits/stdc++.h>
// #include<iostream>
using namespace std;
#define ll long long

#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl


void codechefSolution() {
   int n;
    cin>>n;
   
    set<int> st;
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        st.insert(t);
    }
    
    vector<int> v;

    for(auto x:st){
        v.push_back(x);
    }

    sort(v.begin(),v.end());
    int t= v.size();
    cout<<v[t-1]+v[t-2]<<endl;


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