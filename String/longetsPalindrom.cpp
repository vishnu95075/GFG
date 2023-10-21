//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

// } Driver Code Ends
// User function template for C++

class Solution {
   public:
    bool isPalindrom(string s) {
        string reverseS = s;
        reverse(reverseS.begin(), reverseS.end());
        return reverseS == s;
    }
    string longestPalindrome(string s) {
        string ans = "";
        int i = 0, j = s.size();
        int n = j;
        if (n == 0) return s;
        while (j >= 0) {
            for (int i = 0; i < n; i++) {
                string p = s.substr(j, i);
                if (isPalindrom(p)) {
                    if (p.size() > ans.size()) {
                        ans.clear();
                        ans += p;
                    }
                }
            }
            j--;
        }
        for (int i = 0; i < n; i++) {
            string p = s.substr(i, j);
            if (isPalindrom(p)) {
                if (p.size() > ans.size()) {
                    ans.clear();
                    ans += p;
                }
            }
        }
        return ans;
    }
};

class Solution1 {
   public:
    string longestPalindrome(string s) {
        int n = s.size();
        string ans = "";
        for (int i = 0; i < n; i++) {
            int k = i, l = i;
            deb(s[i]);
            while (l >= 0 && k < n) {
             
                if (s[l] == s[k]) {
                    l--;
                    k++;

                } else {
                    string t = s.substr(l, k);
                    deb2(l,k);
                    deb(t);
                    if (ans.size() < t.size()) {
                        ans.clear();
                        ans += t;
                    }
                    break;
                }
            }
        }
        return ans;
    }
};

int main() {
    int t = 1;
    // cin>>t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        Solution1 ob1;
        // cout << ob.longestPalindrome(S) << endl;
        cout << ob1.longestPalindrome(S) << endl;
    }
    return 0;
}

// } Driver Code Ends