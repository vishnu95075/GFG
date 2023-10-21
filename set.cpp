#include <iostream>
#include <set>
using namespace std;

int main() {\
  set<int> s;
  s.insert(8);
  s.insert(3);
  s.insert(34);

  for(auto i:s){
    cout<<i<<" ";
  }

  cout<<(s.find(3)!=s.end())<<endl;

}