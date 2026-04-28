#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<string> grid(n);
    for (int i = 0; i < n; i++) cin >> grid[i];
    
    // reachable[i] = true if cell (i, k-i) is reachable at step k
    // At step k, valid rows: max(0, k-(n-1)) <= i <= min(k, n-1)
    
    int steps = 2 * n - 1;
    
    // Use two bitsets or bool vectors
    // reachable cells on diagonal k: row i means col = k - i
    
    vector<bool> cur(n, false);
    cur[0] = true; // step 0: only (0,0)
    
    string ans;
    ans.reserve(steps);
    
    for (int k = 0; k < steps; k++) {
        int row_min = max(0, k - (n - 1));
        int row_max = min(k, n - 1);
        
        // Find min char among reachable cells on this diagonal
        char best = 'Z' + 1;
        for (int i = row_min; i <= row_max; i++) {
            if (cur[i]) {
                int j = k - i;
                best = min(best, grid[i][j]);
            }
        }
        ans += best;
        
        if (k == steps - 1) break;
        
        // Build next reachable: from cells with best char, go right or down
        vector<bool> nxt(n, false);
        for (int i = row_min; i <= row_max; i++) {
            if (cur[i] && grid[i][k - i] == best) {
                // move down: (i+1, k-i) -> on diagonal k+1, row = i+1
                if (i + 1 < n) nxt[i + 1] = true;
                // move right: (i, k-i+1) -> on diagonal k+1, row = i
                int j = k - i;
                if (j + 1 < n) nxt[i] = true;
            }
        }
        cur = move(nxt);
    }
    
    cout << ans << "\n";
    return 0;
}