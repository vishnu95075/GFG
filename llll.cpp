//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

//   (arr[i]-arr[j])*arr[k]   where 1 ≤ i < j < k ≤ n.

#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

class Solution {
   public:
    long long maxValue(int n, int arr[]) {
        long long ans = 0;
        long long temp = 0;
        int k=0;
        for (int i = 0; i < n-1; i++) {
            for (int j = i + 1; j < n-1; j++) {
                temp = (arr[i] - arr[j]);
                if (ans < temp) {
                    ans = temp;
                    k = j;
                }
            }
        }

        int tm = 0;
        for(int i=k; i<n; i++){
            tm = max(arr[i],tm);
        }

        return ans*tm;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    // cin>>t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n], i;
        for (i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        long long ans = ob.maxValue(n, arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends