#include<bits/stdc++.h>
using namespace std;


int solve(vector<int>& arr,int idx,int sum,int totalsum, vector<vector<int>>&dp){

	if(idx>=arr.size()){
		return abs(2*sum-totalsum);
	}

	if(dp[idx][sum]!=-1)
	return dp[idx][sum];

	return dp[idx][sum]=min(solve(arr,idx+1,sum,totalsum,dp),solve(arr,idx+1,sum+arr[idx],totalsum,dp));

}

int minSubsetSumDifference(vector<int>& arr, int n)
{
	
	int totalsum=accumulate(arr.begin(),arr.end(),0);

	vector<vector<int>>dp(n,vector<int>(totalsum+1,-1));

	return solve(arr,0,0,totalsum,dp);
}
 
int main()
{
    int size;
    cout<<"Enter the size of array\n";
    cin>>size;

    vector<int> arr(size);
    cout<<"Enter the element of array\n";
    for(int i=0;i<size;i++){
    cin>>arr[i];
    }

    cout<<"Minimum subset sum difference: "<<minSubsetSumDifference(arr,size);
    return 0;
}