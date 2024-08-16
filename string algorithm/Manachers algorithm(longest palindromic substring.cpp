#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function to preprocess the string to handle even-length palindromes
string preprocess(const string &s) {
    string t = "#";
    for (char c : s) {
        t += c;
        t += "#";
    }
    return t;
}

// Manacher's Algorithm to find the longest palindromic substring
string manacher(const string &s) {
    string t = preprocess(s);
    int n = t.size();
    vector<int> P(n, 0); // Array to store the lengths of palindromes
    int C = 0, R = 0; // Center and Right boundary of the current palindrome

    for (int i = 0; i < n; i++) {
        int mirror = 2 * C - i;
        if (i < R) {
            P[i] = min(R - i, P[mirror]);
        }

        // Expand around the center i
        while (i + P[i] + 1 < n && i - P[i] - 1 >= 0 && t[i + P[i] + 1] == t[i - P[i] - 1]) {
            P[i]++;
        }

        // Update the center and right boundary
        if (i + P[i] > R) {
            C = i;
            R = i + P[i];
        }
    }

    // Find the maximum length and its center
    int maxLen = 0, centerIndex = 0;
    for (int i = 0; i < n; i++) {
        if (P[i] > maxLen) {
            maxLen = P[i];
            centerIndex = i;
        }
    }

    // Extract the longest palindromic substring from the original string
    int start = (centerIndex - maxLen) / 2;
    return s.substr(start, maxLen);
}

int main() {
    string s;
    cin >> s;
    cout << manacher(s) << endl;
    return 0;
}
