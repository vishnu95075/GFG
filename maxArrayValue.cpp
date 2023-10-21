#include <cmath>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;
long long maxArrayValue(vector<int> &arr, int n) {
    
}

signed main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &t : arr) {
        cin >> t;
    }

    cout << maxArrayValue(arr, n) << endl;

    return 0;
}