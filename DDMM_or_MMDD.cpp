//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
   public:
    void merge(long long arr1[], long long arr2[], int n, int m) {
        int i = 0, j = 0;

        while (i < n) {
            int temp = arr1[i];

    




// 1 3 0
// 0 1 3 
           
        }
    }
};

int main() {
    int T = 1;
    // cin >> T;

    while (T--) {
        int n, m;
        cin >> n >> m;

        long long arr1[n], arr2[m];

        for (int i = 0; i < n; i++) {
            cin >> arr1[i];
        }

        for (int i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);

        for (int i = 0; i < n; i++)
            cout << arr1[i] << " ";

        cout << endl;

        for (int i = 0; i < m; i++)
            cout << arr2[i] << " ";

        cout << endl;
    }

    return 0;
}

// } Driver Code Ends