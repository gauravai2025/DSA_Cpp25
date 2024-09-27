#include <bits/stdc++.h>
using namespace std;

// Possible moves and corresponding characters
vector<vector<int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
unordered_map<int, char> directionMap = {{0, 'D'}, {1, 'U'}, {2, 'R'}, {3, 'L'}};

// Check if the current position is valid
bool isvalid(int sr, int sc, int size, vector<vector<int>>& mat, vector<vector<int>>& visited) {
    return (sr >= 0 && sr < size && sc >= 0 && sc < size && mat[sr][sc] == 1 && visited[sr][sc] == 0);
}

// Perform DFS to find all paths
void dfs(vector<vector<int>>& mat, vector<string>& ans, string str, int sr, int sc, vector<vector<int>>& visited) {
    // Base case: if the destination is reached
    if (sr == mat.size() - 1 && sc == mat.size() - 1) {
        ans.push_back(str);
        return;
    }

    // Mark the current cell as visited
    visited[sr][sc] = 1;

    // Explore all 4 directions
    for (int i = 0; i < 4; i++) {
        int xnew = sr + directions[i][0];
        int ynew = sc + directions[i][1];

        if (isvalid(xnew, ynew, mat.size(), mat, visited)) {
            dfs(mat, ans, str + directionMap[i], xnew, ynew, visited);
        }
    }

    // Backtrack: unmark the cell after exploring all paths from here
    visited[sr][sc] = 0;
}

// Function to find all possible paths from (0, 0) to (n-1, n-1)
void findPath(vector<vector<int>>& mat) {
    vector<string> ans;
    int n = mat.size();
    
    if (mat[0][0] == 0 || mat[n - 1][n - 1] == 0) {
        // If start or destination is blocked, return no path
        return;
    }

    vector<vector<int>> visited(n, vector<int>(n, 0));

    // Start DFS from (0, 0) with an empty path string
    dfs(mat, ans, "", 0, 0, visited);

    // Print all possible paths
    for (string s : ans) {
        cout << s << endl;
    }
}

int main() {
    int row, col;
    cout << "Enter the row and column\n";
    cin >> row >> col;

    vector<vector<int>> grid(row, vector<int>(col));
    cout << "Enter the matrix in form 0 and 1\n";  // 0 means blocked and 1 means open

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> grid[i][j];
        }
    }

    findPath(grid);

    return 0;
}
