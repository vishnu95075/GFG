#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a;
    a.push_back(23);
    a.push_back(34);

cout<<"11aaa"<<endl;

for(auto x:a){
    cout<<x<<" ";
}

 vector<int> b;
    b.push_back(10);
    b.push_back(3);

cout<<"bbbb"<<endl;

    
for(auto x:b){
    cout<<x<<" ";
}
cout<<"aaa"<<endl;

a.clear();
a.assign(b.begin(),b.end());
for(auto x:a){
    cout<<x<<" ";
}
    return 0;
}