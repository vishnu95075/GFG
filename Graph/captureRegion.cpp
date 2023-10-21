#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<char>>& matrix, int row, int col) {
    int n = matrix.size();
    int m = matrix[0].size();

    if (row < 0 || col < 0 || row >= n || col >= m || matrix[row][col] != 'O') {
        return;
    }

    matrix[row][col] = '#';
    dfs(matrix, row + 1, col);
    dfs(matrix, row - 1, col);
    dfs(matrix, row, col + 1);
    dfs(matrix, row, col - 1);
}

void flipRegions(vector<vector<char>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    // Step 1: Mark 'O's on the boundary and connected to the boundary with '#'
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                if (matrix[i][j] == 'O') {
                    dfs(matrix, i, j);
                }
            }
        }
    }

    // Step 2: Flip the remaining 'O's (not connected to the boundary) to 'X'
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] == 'O') {
                matrix[i][j] = 'X';
            }
        }
    }

    // Step 3: Restore the '#' back to 'O'
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] == '#') {
                matrix[i][j] = 'O';
            }
        }
    }
}

int main() {
    vector<vector<char>> matrix = {
        {'X', 'X', 'X', 'X'},
        {'X', 'O', 'O', 'X'},
        {'X', 'X', 'O', 'X'},
        {'X', 'X', 'X', 'X'},
    };

    flipRegions(matrix);

    for (const auto& row : matrix) {
        for (char cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }

    return 0;
}
