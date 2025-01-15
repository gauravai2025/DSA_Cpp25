#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    
    vector<int> price(n);
    vector<int> pages(n);
    
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }
    
    for (int i = 0; i < n; i++) {
        cin >> pages[i];
    }
    
    // dp[j] will store the maximum number of pages for a given money j
    vector<int> dp(x + 1, 0);

    for (int i = 0; i < n; i++) {
        for (int j = x; j >= price[i]; j--) {
            dp[j] = max(dp[j], dp[j - price[i]] + pages[i]);
        }
    }
    
    cout << dp[x] << endl;
    return 0;
}