#include<bits/stdc++.h>
using namespace std;
 
// Given a square chessboard, the initial position of Knight and position of a target. Find out the minimum steps a Knight will take to reach the target position.If it cannot reach the target position return -1

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

	int minStepToReachTarget(vector<int>&KnightPos, vector<int>&TargetPos, int N){
	   
	      // Convert 1-based index to 0-based index
    int  startRow =KnightPos[0]-1;
     int startCol =KnightPos[1]-1;
    int  targetRow =TargetPos[0]-1;
    int  targetCol =TargetPos[1]-1;
    
    // Initialize visited array
    vector<vector<int>> visited(N, vector<int>(N, 0));
    
    // Perform BFS to find the minimum steps
    return bfs(visited, startRow, startCol, targetRow, targetCol, N);
	}

int main()
{

    int size;
    cout<<"Enter the size of the chessboard: ";
    cin>>size;

    vector<int> KnightPos(2), TargetPos(2);
    cout<<"Enter the position of the Knight: ";
    cin>>KnightPos[0]>>KnightPos[1];
    cout<<"Enter the position of the Target: ";
    cin>>TargetPos[0]>>TargetPos[1];

    if(minStepToReachTarget(KnightPos, TargetPos, size) == -1)
        cout<<"The target is unreachable\n";
    else
        cout<<"The minimum steps required to reach the target are: "<<minStepToReachTarget(KnightPos, TargetPos, size)<<endl;

    return 0;
}