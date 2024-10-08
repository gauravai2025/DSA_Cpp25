#include<bits/stdc++.h>
using namespace std;

 void solve(vector<int>& ans, int curr, int n) {
        // Base case: if curr exceeds n, stop the recursion
        if (curr > n) 
        return;

        // Add the current number to the result
        ans.push_back(curr);

        // Try to form the next number by appending digits 0 to 9
        for (int i = 0; i <= 9; i++) {
            int next = curr * 10 + i;  // calculate the next number
            if (next <= n) {
                solve(ans, next, n);  // recursive call with the next number
            } else {
                break;  // stop further recursion if next exceeds n
            }
        }
    }


    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        // Start with digits from 1 to 9, as we cannot start with 0
        for (int i = 1; i <= 9; i++) {
            if (i <= n) {
                solve(ans, i, n);
            }
        }

        for(auto it:ans){
            cout<<it<<" ";
        }
    }
 
int main()
{

int n;
cout<<"enter value of n : \n";
cin>>n;

lexicalOrder(n);
 
 
 
    return 0;
}