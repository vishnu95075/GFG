/********************************************
**
**   Author  : Vishnu Kumar Prajapati
**   Country : India
**
/*******************************************/

// #include<bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;
#define ll long long

#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

int equalPairs(vector<vector<int>>& grid) {
    int ans{};
    map<vector<int>, int> mp{};
    int gridrows = grid.size();
    int gridcols = grid[0].size();
    for (int k = 0; k < gridrows; ++k) {
        ++mp[grid[k]];
        deb2(mp[grid[k]],k);
        
    }

    vector<int> colVector(gridrows);
    for (int j = 0; j < gridcols; ++j) {
        for (int i = 0; i < gridrows; ++i)
            colVector[i] = grid[i][j];
        int cnt = mp[colVector];
        if (cnt > 0) ans += cnt;
    }
    return ans;
}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<vector<int>> vec(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> vec[i][j];
        }
    }

    cout<<equalPairs(vec)<<endl;


    return 0;
}