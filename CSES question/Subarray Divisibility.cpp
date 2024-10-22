#include<bits/stdc++.h>
using namespace std;

  long long int subarraysDivByK(vector<int>& nums, int k) {

        
    unordered_map<long long int,long long int>mp;
    long long int prefix=0;
    int size=nums.size();

      mp[0]=1;
      long long int ans=0;

   for(int i=0;i<size;i++){

       prefix+=(nums[i]);
       int rem=(prefix)%k;
       // handling negative number
       if(rem<0)
       rem+=k;
       
       ans+=mp[rem];

       mp[rem]++;

   }
    return ans;   
  } 
 
int main()
{
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<subarraysDivByK(nums,n);
    return 0;
}