//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
   public:
    int search(int A[], int l, int h, int key) {
        if (l > h) return -1;
        int mid = (l + h) / 2;
        if (A[mid] == key) return mid;

        if (A[l] <= A[mid]) {
            if (key >= A[l] && key <= A[mid])
                return search(A, l, mid - 1, key);
            return search(A, mid + 1, h, key);
        }
        if (key >= A[mid] && key <= A[h])
            return search(A, mid + 1, h, key);
        return search(A, l, mid - 1, key);
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    // cin >> t;
    while (t--) {
        int n = 9;
        // cin >> n;
        int A[n] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
        // for(int i = 0; i < n; i++)
        //     cin >> A[i];

        int key=2;
        // cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
    return 0;
}
// } Driver Code Ends