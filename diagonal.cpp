#include<iostream>
#include<vector>
#include<cmath>
#include<unordered_map>

using namespace std;


signed main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
                if(n-i-1>j){
                    cout<<"  ";
                }
                else
                cout<<"# ";
                
        }
        cout<<endl;
    }
    return 0 ;
}