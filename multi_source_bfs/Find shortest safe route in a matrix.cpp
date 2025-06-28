#include<bits/stdc++.h>
using namespace std;

// Given a matrix mat[][] with r rows and c columns, where some cells are landmines (marked as 0) and others are safe to traverse. Your task is to find the shortest safe route from any cell in the leftmost column to any cell in the rightmost column of the mat. You cannot move diagonally, and you must avoid both the landmines and their adjacent cells (up, down, left, right), as they are also unsafe.

vector<vector<int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

// Preprocess the matrix to mark unsafe cells
void preprocessUnsafeCells(vector<vector<int>> &mat,vector<vector<int>> &grid){
    int rows = mat.size();
    int cols = mat[0].size();
   

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (mat[i][j] == 0) { // Landmine
                for (auto dir : directions) {
                    int x = i + dir[0];
                    int y = j + dir[1];
                    if (x >= 0 && x < rows && y >= 0 && y < cols) 
                        grid[x][y] = 0; // Mark unsafe
                    
                }
                
                grid[i][j] = 0; // mark unsafe
            }
        }
    }
}

// Check if the move is valid
bool isValidMove(vector<vector<int>> &grid, int x, int y) {
    return x >= 0 && x < grid.size() && y >= 0 && y < grid[0].size() && grid[x][y] == 1 ;
}

// BFS to find the shortest safe path
int dfs(vector<vector<int>> &grid) {
    int rows = grid.size();
    int cols = grid[0].size();

    queue<pair<int, pair<int, int>>> q; // {distance, {x, y}}
    
    // insert all-
    for (int i = 0; i < rows; ++i) {
        if (grid[i][0]==1) {
            q.push({1, {i, 0}});
            // mark visited
            grid[i][0] = 0;
        }
    }

    while (!q.empty()) {
        
        auto front = q.front();
        q.pop();

        int dist = front.first;
        int x = front.second.first;
        int y = front.second.second;

        if (y == cols - 1) { // Reached the last column
            return dist;
        }

        for (auto dir : directions) {
            int newX = x + dir[0];
            int newY = y + dir[1];

            if (isValidMove(grid,newX, newY)) {
                q.push({dist + 1, {newX, newY}});
                // mark visited
                grid[newX][newY] = 0;
            }
        }
    }

    return -1; // No path found
}

int findShortestPath(vector<vector<int>> &mat) {
    
    int rows=mat.size();
    int cols=mat[0].size();
    
    vector<vector<int>>grid(rows, vector<int>(cols,1));

    preprocessUnsafeCells(mat,grid); // Mark unsafe cells
   
   int shortestPath = bfs(grid);
        
    return shortestPath;
}
 
int main()
{

    int row,col;
    cin>>row>>col;

    vector<vector<int>>mat(row,vector<int>(col,0));

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>mat[i][j];
        }
    }

    cout<<findShortestPath(mat);
    return 0;
}