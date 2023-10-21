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
    int n;
    cin>>n;
// codechef
    int c=0,o=0,d=0,e=0,h=0,f=0;
    while (n--)
    {
        string s;
        cin>>s;
        for(auto x:s){
            if(x=='c') c++;
            else if(x=='o') o++;
            else if(x=='d') d++;
            else if(x=='e') e++;
            else if(x=='h') h++;
            else if(x=='f') f++;
        }
    }
    int ans = min(c/2,min(o,min(d,min(e/2,min(h,f)))));
    cout<<ans<<endl;
    

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