#include<bits/stdc++.h>
using namespace std;

 int slidingwndw(vector<int>& nums, int k){
          int size=nums.size();
         int val=0;
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
    int size;
    // cout<<"Enter the size of the array"<<endl;
    cin>>size;
    vector<int>nums(size);
    // cout<<"Enter the elements of the array"<<endl;

    for(int i=0;i<size;i++){
        cin>>nums[i];
    }

    // cout<<"Enter the value of k"<<endl;
    int k;
    cin>>k;
    cout<<slidingwndw(nums,k);
    return 0;
}