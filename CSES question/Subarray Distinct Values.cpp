#include<bits/stdc++.h>
using namespace std;

long long int slidingwndw(vector<int>& nums, int k){
          int size=nums.size();
       long long   int val=0;
        map<int,int>mp;
       int left=0,right=0;
       
       while(right<size){

        mp[nums[right]]++;

      if(mp.size()>k){
           while(mp.size()>k){
            mp[nums[left]]--;

            if(mp[nums[left]]==0)
            mp.erase(nums[left]);

            left++;
           } 
      }
      
       val+=(right-left+1);
           
      right++;
       }

       return val;

    }

 
int main()
{
    int size,k;
    cin>>size>>k;
    vector<int>nums(size);

    for(int i=0;i<size;i++){
        cin>>nums[i];
    }

    cout<<slidingwndw(nums,k);
    return 0;
}