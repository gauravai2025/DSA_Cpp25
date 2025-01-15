#include<bits/stdc++.h>
using namespace std;
 

void  pascaltriangle(int n, int r) {
    
        // pascale triangle
        
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        
        for(int i=1;i<=n;i++){
            for(int j=i;j>0;j--){
                dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
            }
        }
        
       for(int i=0;i<=n;i++){
           for(int j=0;j<=i;j++){
               cout<<dp[i][j]<<" ";
           }
           cout<<endl;
       }
           
    }

int main()
{

    int n;
    cout<<"Enter n : \n";
    cin>>n;

    pascaltriangle(n,n);
    return 0;
}