#include<bits/stdc++.h>
using namespace std;


// Recursive function to find the Longest Common Substring
int lcs(const string &X, const string &Y, int i, int j, int count, unordered_map<string,int>&dp) {
    // Base case: if either string is exhausted
    if (i >= X.size() || j >= Y.size())
        return count;

   string key=to_string(i)+"g"+to_string(j)+"g"+to_string(count);
   
   if(dp.count(key))
   return dp[key];

    int same = count;

    // Case 1: Characters match
    if (X[i] == Y[j]) {
        same = lcs(X, Y, i + 1, j + 1, count + 1, dp);
    }

    // Case 2: Explore other possibilities (mismatch)
    int diff1 = lcs(X, Y, i, j + 1, 0, dp);   // Move in `Y`
    int diff2 = lcs(X, Y, i + 1, j, 0, dp);   // Move in `X`

            
   int ans= max(same, max(diff1, diff2));
   
   string keyf=to_string(i)+"g"+to_string(j)+"g"+to_string(count);
   
   dp.insert({keyf,ans});
   
   return ans;
}

int longestCommonSubstr(string &s1, string &s2) {
    int len1 = s1.size();
    int len2 = s2.size();

  
    unordered_map<string,int>dp;

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