#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> directions = {{2,1},{2,-1},{-2,1},{-2,-1},{1,-2},{-1,-2},{1,2},{-1,2}};

// Function to check if a move is valid
bool isvalid(vector<vector<int>>& visited, int sr, int sc, int n) {
    return (sr >= 0 && sr < n && sc >= 0 && sc < n && visited[sr][sc] == 0);
}

int bfs(vector<vector<int>>& visited, int sr, int sc, int tr, int tc, int n) {
    queue<pair<pair<int, int>, int>> q;
    
    q.push({{sr, sc}, 0});
    visited[sr][sc] = 1;
    
    while (!q.empty()) {
        auto front = q.front();
        q.pop();
        
        int currRow = front.first.first;
        int currCol = front.first.second;
        int lvl = front.second;
        
        if (currRow == tr && currCol == tc)
            return lvl;
        
        // Explore all 8 possible knight moves
        for (int i = 0; i < 8; i++) {
            int newRow = currRow + directions[i][0];
            int newCol = currCol + directions[i][1];
            
            if (isvalid(visited, newRow, newCol, n)) {
                q.push({{newRow, newCol}, lvl + 1});
                visited[newRow][newCol] = 1;
            }
        }
    }
    
    // If the target is unreachable
    return -1;
}


// Function to find out the minimum steps Knight needs to reach target position.
int minStepToReachTarget( int startRow,   int startCol , int targetRow , int targetCol, int N) {
    // Convert 1-based index to 0-based index
     startRow --;
     startCol --;
     targetRow --;
     targetCol --;
    
    // Initialize visited array
    vector<vector<int>> visited(N, vector<int>(N, 0));
    
    // Perform BFS to find the minimum steps
    return bfs(visited, startRow, startCol, targetRow, targetCol, N);
}
 
int main()
{

 int n;
 cout<<"enter size of chess board\n";
    cin>>n;
    int sr,sc;
    cout<<"starting position of knight\n";
    cin>>sr>>sc;

    int tr,tc;
    cout<<"target position of knight\n";
    cin>>tr>>tc;

    cout<<minStepToReachTarget(sr,sc,tr,tc,n);
 
 
    return 0;
}