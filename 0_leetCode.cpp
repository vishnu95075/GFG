#include <cmath>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

void solve(vector<int> &arr,int n){
    
}

signed main() {
    string s;
    cin >> s;

    vector<int> arr;
    int num = 0;
    for (int i = 1; i < s.size(); i++) {
        if ((s[i] - '0') >= 0 and (s[i] - '0') <= 9) {
            num = ((num * 10) + (s[i] - 48));
        } else {
            arr.push_back(num);
            num = 0;
        }
    }

    solve(arr,arr.size());

    return 0;
}