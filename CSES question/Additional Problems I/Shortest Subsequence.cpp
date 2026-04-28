#include <bits/stdc++.h>
using namespace std;

// Function to check if a candidate is a subsequence of the given string
bool isSubsequence(const string& s, const string& candidate) {
    int n = s.size();
    int m = candidate.size();
    int j = 0; // index for candidate
    for (int i = 0; i < n && j < m; ++i) {
        if (s[i] == candidate[j]) {
            ++j;
        }
    }
    return j == m;
}

int main() {
    string s;
    cin >> s;
    int n = s.size();
    
    // Characters to be used
    vector<char> chars = {'A', 'C', 'G', 'T'};
    
    // Check single characters
    for (char c : chars) {
        if (s.find(c) == string::npos) {
            cout << c << endl;
            return 0;
        }
    }
    
    // Check two-character combinations
    for (char c1 : chars) {
        for (char c2 : chars) {
            string candidate = {c1, c2};
            if (!isSubsequence(s, candidate)) {
                cout << candidate << endl;
                return 0;
            }
        }
    }
    
    // Check three-character combinations
    for (char c1 : chars) {
        for (char c2 : chars) {
            for (char c3 : chars) {
                string candidate = {c1, c2, c3};
                if (!isSubsequence(s, candidate)) {
                    cout << candidate << endl;
                    return 0;
                }
            }
        }
    }
    
    // Check four-character combinations
    for (char c1 : chars) {
        for (char c2 : chars) {
            for (char c3 : chars) {
                for (char c4 : chars) {
                    string candidate = {c1, c2, c3, c4};
                    if (!isSubsequence(s, candidate)) {
                        cout << candidate << endl;
                        return 0;
                    }
                }
            }
        }
    }

    // Since the problem guarantees a solution, we don't handle cases beyond four characters
    return 0;
}
