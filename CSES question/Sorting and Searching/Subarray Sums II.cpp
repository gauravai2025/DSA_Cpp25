#include<bits/stdc++.h>
using namespace std;

long long int subarraySum(vector<int>& nums, int k) {
        long long int ans=0;
        int size=nums.size();
        map<long long int,long long int>mp;
        mp[0]=1;
       long long  int presm=0;

        for(int i=0;i<size;i++){
            presm+=nums[i];
            ans+=mp[presm-k];
            mp[presm]++;

        }

        return ans;
    }

 
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<subarraySum(nums,k);
    return 0;
}