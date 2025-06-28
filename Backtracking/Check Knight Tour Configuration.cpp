#include<bits/stdc++.h>
using namespace std;

// There is a knight on an n x n chessboard. In a valid configuration, the knight starts at the top-left cell of the board and visits every cell on the board exactly once.

// You are given an n x n integer matrix grid consisting of distinct integers from the range [0, n * n - 1] where grid[row][col] indicates that the cell (row, col) is the grid[row][col]th cell that the knight visited. The moves are 0-indexed.

// Return true if grid represents a valid configuration of the knight's movements or false otherwise.

// Note that a valid knight move consists of moving two squares vertically and one square horizontally, or two squares horizontally and one square vertically. The figure below illustrates all the possible eight moves of a knight from some cell.

       // Possible next moves.
       vector<vector<int>> directions ={
        {2, 1}, {1, 2}, {-1, 2}, {-2, 1},
        {-2, -1}, {-1, -2}, {1, -2}, {2, -1}
    };
    
    bool dfsbacktarck(vector<vector<int>> &grid, int n, int m, int x, int y, int move) {
        
         // All cells are visited.
       if(move == n*m-1 ){
        return true;
        }
    
        // Recursively try out all possible next moves.
        for(int i = 0; i < 8; i++) {
    
            int nextX = x + directions[i][0];
            int nextY = y + directions[i][1];
    
            if(nextX >= 0 && nextX < n && nextY >= 0 && nextY < m && grid[nextX][nextY] == move+1) {
               int temp= grid[nextX][nextY];
                grid[nextX][nextY] =-1 ;
    
                if(dfsbacktarck(grid, n, m, nextX, nextY, move+1) == true) {
                    return true;
                }
    
                else {
                // Backtracking
                grid[nextX][nextY] = temp;
                }
            }
        }
    
        return false;
    }
    
        bool checkValidGrid(vector<vector<int>>& grid) {
            
        int n=grid.size();
    
        int x0=0,y0=0;
    
        for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){
              if(grid[i][j]==0){
                x0=i;
                y0=j;
                break;
              }  
        }
    
        }
    
        if(x0!=0 || y0!=0)
        return 0;
    
        grid[x0][y0]=-1;
    
        if(dfsbacktarck(grid, n, n, x0, y0, 0) == true)
        return 1;
        else
        return 0;
    
        }
 
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>grid(n,vector<int>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }

    if(checkValidGrid(grid))
    cout<<"Valid Configuration"<<endl;
    else
    cout<<"Invalid Configuration"<<endl;
 
    return 0;
}