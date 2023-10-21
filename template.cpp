#include <iostream>
using namespace std;

template <typename U>

U fun(U a, U b) {
    return (a>b);
}

template <typename U>
int main() {
    int t;
    cin>>t;
    cout<<t<<endl;
    cout << fun(1,3) << endl;
}