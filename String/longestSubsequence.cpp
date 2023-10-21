//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
   public:
    int LongestRepeatingSubsequence(string s) {
        int n = s.size(), ans = 0;

        vector<int> dp(n + 1, 0), prev(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                
                if (s[i - 1] == s[j - 1] && i != j)
                    dp[j] = 1 + prev[j - 1];
                else
                    dp[j] = max(prev[j], dp[j - 1]);
                ans = max(ans, dp[j]);
            }
            prev = dp;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        string str;
        cin >> str;
        Solution obj;
        int ans = obj.LongestRepeatingSubsequence(str);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends