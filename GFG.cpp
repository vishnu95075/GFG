//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution {
   public:
    int isDivisible(string s) {
        long num = 0;
        int n = s.size();
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '1') {
                num += pow(2, n-i-1);
                cout<<num<<" "<<i<<endl;
            }
            cout << num << endl;
            if (num > (3 * 3)) {
                num = -3;
            }
        }
        cout<<num<<endl;
        return (num % 3 == 0);
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    // cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
    return 0;
}

// } Driver Code Ends