//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

// } Driver Code Ends

class Solution {
   public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) {
        int sum = 0;
        int t = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                sum += arr[i];
                t++;
            }
        }
        t++;

        int ans = (t * (t + 1) / 2);
        // deb2(sum, ans);
        if (t > n) {
            return t;
        } else {
            return ans - sum;
        }
    }
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() {
    // taking testcases
    int t = 1;
    // cin>>t;
    while (t--) {
        // input number n
        int n;
        cin >> n;
        int arr[n];

        // adding elements to the array
        for (int i = 0; i < n; i++) cin >> arr[i];

        Solution ob;
        // calling missingNumber()
        cout << ob.missingNumber(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends