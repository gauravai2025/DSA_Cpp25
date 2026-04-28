#include <bits/stdc++.h>
using namespace std;

// Function to compute prefix function
vector<int> computePrefixFunction(const string &s) {
    int n = s.size();
    vector<int> pi(n);
    for (int i = 1; i < n; i++) {
        int j = pi[i-1];
        while (j > 0 && s[i] != s[j]) {
            j = pi[j-1];
        }
        if (s[i] == s[j]) {
            j++;
        }
        pi[i] = j;
    }
    return pi;
}

int main() {
    string str;
    cin >> str;
    int n = str.size();

    // Compute the prefix function
    vector<int> pi = computePrefixFunction(str);

    // Collect the border lengths
    vector<int> borders;
    int k = pi[n-1];
    while (k > 0) {
        borders.push_back(k);
        k = pi[k-1];
    }

    // Output the border lengths in increasing order
    sort(borders.begin(), borders.end());
    for (int border : borders) {
        cout << border << " ";
    }

    return 0;
}
