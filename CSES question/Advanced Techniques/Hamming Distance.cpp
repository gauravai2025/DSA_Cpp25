#include <bits/stdc++.h>
using namespace std;

// Function to calculate the Hamming distance between two integers
int hammingDistance(int a, int b) {
    return __builtin_popcount(a ^ b);
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> bitStrings(n);
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        bitStrings[i] = stoi(s, nullptr, 2);
    }

    int minDistance = k; // Maximum possible distance is k

    // Compare each pair of bit strings
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int distance = hammingDistance(bitStrings[i], bitStrings[j]);
            if (distance < minDistance) {
                minDistance = distance;
            }
        }
    }

    cout << minDistance << endl;

    return 0;
}
