#include<bits/stdc++.h>
using namespace std;

int maxprofit(vector<vector<int>>&jobs,int idx,int currend, vector<vector<int>>&dp){

    if(idx>=jobs.size())
    return 0;

    if(dp[idx][currend]!=-1)
     return dp[idx][currend];
    
    // overlapping
    if(jobs[idx][0]<currend)
    return dp[idx][currend]= maxprofit(jobs,idx+1,currend,dp);
    // non overlapping
    else{
    return dp[idx][currend]= max(jobs[idx][2]+maxprofit(jobs,idx+1,jobs[idx][1],dp),maxprofit(jobs,idx+1,currend,dp)); 

    }

 }

int main()
{

int size;
cout<<"Enter number of jobs\n";
cin>>size;

vector<vector<int>>jobs(size,vector<int>(3));
int endmx=0;

for(int i=0;i<size;i++){
cout<<"Enter start time, end time and profit/weight of job "<<i+1<<endl;
cin>>jobs[i][0]>>jobs[i][1]>>jobs[i][2];

endmx=max(endmx,jobs[i][1]);
}

sort(jobs.begin(),jobs.end());
vector<vector<int>>dp(jobs.size(),vector<int>(endmx+1,-1));

cout<<"Maximum profit is: "<<maxprofit(jobs,0,0,dp);

return 0;
}