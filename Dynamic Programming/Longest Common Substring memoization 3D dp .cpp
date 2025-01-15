#include<bits/stdc++.h>
using namespace std;

// Recursive function to find the Longest Common Substring
int lcs(const string &X, const string &Y, int i, int j, int count, vector<vector<vector<int>>> &dp) {
    // Base case: if either string is exhausted
    if (i >= X.size() || j >= Y.size())
        return count;

    // Check if already computed
    if (dp[i][j][count] != -1)
        return dp[i][j][count];

    int same = count;

    // Case 1: Characters match
    if (X[i] == Y[j]) {
        same = lcs(X, Y, i + 1, j + 1, count + 1, dp);
    }

    // Case 2: Explore other possibilities (mismatch)
    int diff1 = lcs(X, Y, i, j + 1, 0, dp);   // Move in `Y`
    int diff2 = lcs(X, Y, i + 1, j, 0, dp);   // Move in `X`

    // Take the maximum of all cases
    return dp[i][j][count] = max(same, max(diff1, diff2));
}

int longestCommonSubstr(string &s1, string &s2) {
    int len1 = s1.size();
    int len2 = s2.size();

    // 3D memoization table
    vector<vector<vector<int>>> dp(len1, vector<vector<int>>(len2, vector<int>(max(len1, len2) + 1, -1)));

    // Solve recursively
    return lcs(s1, s2, 0, 0, 0, dp);
}
 
int main()
{

string s1, s2;
cout<<"Enter the first string\n";
cin>>s1;
cout<<"Enter the second string\n";
cin>>s2;

cout<<"Length of Longest Common Substring: "<<longestCommonSubstr(s1, s2);
 return 0;
}