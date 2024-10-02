#include<bits/stdc++.h>
using namespace std;

    vector< long long int>dp;


 long long int solve(int val){
        
        // base case target sum achieve
        
        if(val==0){
            return 1;
        }
        
        // sum exceed target sum
        if(val<0)
        return 0;
        
        if(dp[val]!=-1)
        return dp[val];
        
        long long num_ways=0;
        
         vector<int>dgt;
         int num=val;

        while(num!=0){
            dgt.push_back(num%10);
            num/=10;
        }

        for(int i=0;i<dgt.size();i++){
            if(dgt[i])
           num_ways+=solve(val-dgt[i]);
        }
        
        return dp[val]=num_ways;
        
    }

 
int main()
{

int n;
cin>>n;

int val=n;

dp.resize(n+1,-1);

cout<<solve(val);
 
 
    return 0;
}