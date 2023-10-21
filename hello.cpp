//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// Back-end complete function Template for C++

#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

class Solution {
   public:
    int countZeros(vector<vector<int>> a) {
        int n = a.size();

        int cnt = 0;

        for (int i = 0; i < n; i++) {
            int j = n - 1;
            while (a[i][j] and j>=0) {
                j--;
            }
          
            cnt += (j + 1);
        }
        return cnt;
    }
};

//{ Driver Code Starts.

// Driver program
int main() {
    int t = 1;
    // cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> A(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> A[i][j];
            }
        }
        Solution ob;
        cout << ob.countZeros(A) << '\n';
    }
    return 0;
}

// } Driver Code Ends