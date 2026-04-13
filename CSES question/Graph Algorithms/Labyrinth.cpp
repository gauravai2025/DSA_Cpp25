#include <bits/stdc++.h>
using namespace std;

struct Cell {
    int x, y;
    char dir; // Direction from parent to this cell
};

void bfs(vector<vector<char>>& grid, int startX, int startY, vector<vector<pair<int, int>>>& parent, vector<vector<char>>& direction, pair<int, int>& destination) {
    int n = grid.size();
    int m = grid[0].size();

    queue<Cell> q;
    q.push({startX, startY, ' '}); // Starting point, no direction

    vector<vector<bool>> visited(n, vector<bool>(m, false));
    visited[startX][startY] = true;

    // Directions for moving in the grid with corresponding characters
    vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    vector<char> dirSymbols = {'D', 'U', 'R', 'L'}; // Down, Up, Right, Left

    while (!q.empty()) {
        Cell current = q.front();
        q.pop();

        // If the destination is found, stop the BFS
        if (grid[current.x][current.y] == 'B') {
            destination = {current.x, current.y};
            break;
        }

        // Explore the neighbors in all 4 directions
        for (int k = 0; k < 4; ++k) {
            int newX = current.x + directions[k].first;
            int newY = current.y + directions[k].second;

            // Only process valid, unvisited neighbors within grid boundaries and not blocked
            if (newX >= 0 && newX < n && newY >= 0 && newY < m && !visited[newX][newY] && grid[newX][newY] != '#') {
                visited[newX][newY] = true;  // Mark as visited
                parent[newX][newY] = {current.x, current.y}; // Set parent coordinates
                direction[newX][newY] = dirSymbols[k]; // Set direction to reach this cell
                q.push({newX, newY, dirSymbols[k]});  // Add to queue
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m));
    pair<int, int> source, destination = {-1, -1};

    // Input the grid and find the source
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'A') {
                source = {i, j};
            }
        }
    }

    // Parent and direction tracking
    vector<vector<pair<int, int>>> parent(n, vector<pair<int, int>>(m, {-1, -1}));
    vector<vector<char>> direction(n, vector<char>(m, ' '));

    // Perform BFS to find the path
    bfs(grid, source.first, source.second, parent, direction, destination);

    // Check if we found the destination
    if (destination == pair<int, int>{-1, -1}) {
        cout << "NO" << endl; // Destination not found
        return 0;
    }

    // Backtrack from the destination to the source using the parent and direction map
    vector<char> path;
    while (destination != source) {
        path.push_back(direction[destination.first][destination.second]); // Add direction to path
        destination = parent[destination.first][destination.second];     // Move to the parent

        // If we reach an invalid parent, there's no path
        if (destination == pair<int, int>{-1, -1}) {
            cout << "NO" << endl;
            return 0;
        }
    }

    // Output the path if found
    cout << "YES" << endl;
    cout << path.size() << endl; // Number of steps
    reverse(path.begin(), path.end()); // Reverse to get the correct order from source to destination
    for (auto& step : path) {
        cout << step; // Output direction (U, D, L, R)
    }
    cout << endl;

    return 0;
}
