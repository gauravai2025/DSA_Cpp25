#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    while (true) {
        int n;
        cin >> n;

        if (n == 0)
            break;

        int a[n];
        vector<pair<int, int>> buy;
        vector<pair<int, int>> sell;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] < 0)
                sell.push_back({a[i], i});
            else
                buy.push_back({a[i], i});
        }

        int sizeb = buy.size();
        int sizes = sell.size();
        int i = 0, j = 0;

        long long int ans = 0;

        while (i < sizeb && j < sizes) {
            int val = min(buy[i].first, -sell[j].first);

            ans += 1LL * val * abs(buy[i].second - sell[j].second);

            buy[i].first -= val;
            sell[j].first += val;

            if (buy[i].first == 0)
                i++;
            if (sell[j].first == 0)
                j++;
        }

        cout << ans << endl;
    }

    return 0;
}
