#include <bits/stdc++.h>
using namespace std;

/*
    Time Complexity : O(8^(N*M))
    Space Complexity : O(N*M)
*/

   // Possible next moves.
vector<vector<int>> directions = {
    {2, 1}, {1, 2}, {-1, 2}, {-2, 1},
    {-2, -1}, {-1, -2}, {1, -2}, {2, -1}
};

// Function to display the board
void display(vector<vector<int>>& board) {
    for (auto row : board) {
        for (auto cell : row) {
            cout << setw(3) << cell << " ";
        }
        cout << endl;
    }
}

bool dfsbacktarck(vector<vector<int>> &order, int n, int m, int x, int y, int move) {
    
    // All cells are visited.
    if(move == n*m ) {
        return true;
    }
    // Recursively try out all possible next moves.
    for(int i = 0; i < 8; i++) {
        int nextX = x + directions[i][0];
        int nextY = y + directions[i][1];

        if(nextX >= 0 && nextX < n && nextY >= 0 && nextY < m && order[nextX][nextY] == -1) {
            order[nextX][nextY] = move+1;

            if(dfsbacktarck(order, n, m, nextX, nextY, move+1) == true) {
                return true;
            }

            else {
                // Backtracking
                order[nextX][nextY] = -1;
            }
        }
    }
    return false;
}

int main() {
    int n,m;
    cout << "Enter rectangular board size:\n ";
    cin >>n>>m;

    vector<vector<int>>board(n, vector<int>(m, -1));

    board[0][0] = 1;

    if(dfsbacktarck(board, n, m, 0, 0, 1) == true) {
     display(board);
    }

    else {
    cout << "Solution does not exist" << endl;
    }
    return 0;
}
