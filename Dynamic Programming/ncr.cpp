#include<bits/stdc++.h>
using namespace std;

// int nCr(int n, int r) {  //  time complexity O(n^2) and space complexity O(n^2)

    
//         // base case
        
//         if(r>n)
//         return 0;
        
//         if(r>n-r)
//         r=n-r;
        
//         // pascale triangle
        
//         vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        
//         for(int i=0;i<=n;i++){
//             dp[i][0]=1;
//         }
        
//         for(int i=1;i<=n;i++){
//             for(int j=i;j>0;j--){
//                 dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
//             }
//         }
        
//         return dp[n][r];
        
        
        
//     }

//  int nCr(int n, int r) {  //time complexity O(n*r) and space complexity O(n*r)
    
//         // base case
        
//         if(r>n)
//         return 0;
        
//         if(r>n-r)
//         r=n-r;
        
//         // pascale triangle
        
//         vector<vector<int>>dp(n+1,vector<int>(r+1,0));
        
//         for(int i=0;i<=n;i++){
//             dp[i][0]=1;
//         }
        
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=r;j++){
//                 dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
//             }
//         }
        
//         return dp[n][r];
        
        
        
//     } 


int nCr(int n, int r) {  //time complexity O(n*r) and space complexity O(r)
    
        // base case
        
        if(r>n)
        return 0;
        
        if(r>n-r)
        r=n-r;
        
        // pascale triangle
    
        vector<int>curr(r+1,0);
        
         curr[0]=1;
    
        for(int i=1;i<=n;i++){
          for (int j = min(r, i); j > 0; j--) {
                curr[j]=curr[j]+curr[j-1];
            }
        }
        
        return curr[r];
        
        
        
    }
 
int main()
{

int n,r;
cout<<"Enter n and r:\n";
cin>>n>>r;

cout<<nCr(n,r);
return 0;
}