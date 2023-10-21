//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

// } Driver Code Ends

class Solution {
   public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        if (k == 1) return 0;
        long long val = 1;
        int pos = 0;
        int c = 0;
        for (int i = 0; i < n; i++) {
            val *= a[i];
            while (val >= k) {
                val /= a[pos];
                pos++;
            } 
            c += i - pos + 1;
            deb2(i,c);
        }
        return c;
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    // cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends