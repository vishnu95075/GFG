/********************************************
**
**   Author  : Vishnu Kumar Prajapati
**   Country : India
**
/*******************************************/

// #include<bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long

#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

vector<vector<int>> ans;

void sub(vector<int> &nums, int i, vector<int> temp) {
    if (i == nums.size()) {
        ans.push_back(temp);
        return;
    }

    sub(nums, i + 1, temp);
    temp.push_back(nums[i]);
    sub(nums, i + 1, temp);
}

void codechefSolution() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        arr.push_back(t);
    }

    vector<int> temp;
    sub(arr, 0, temp);  // or sub(nums, 0, vector<int> {});

    cout << "Anser is : " << endl;

    for (auto x : ans) {
        cout << "[ ";
        for (auto y : x) {
            cout << y << " ";
        }
        cout << "]" << endl;
    }

    cout << "After Sorting  : " << endl;
    sort(ans.begin(), ans.end());
    for (auto x : ans) {
        cout << "[ ";
        for (auto y : x) {
            cout << y << " ";
        }
        cout << "]" << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int codechef_testCase(1);
    // cin >> codechef_testCase;
    while (codechef_testCase--) {
        codechefSolution();
    }

    return 0;
}