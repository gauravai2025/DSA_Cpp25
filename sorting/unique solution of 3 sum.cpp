#include <bits/stdc++.h>
using namespace std;

 void two_sum(vector<int>& nums,int left,int right,int target, vector<vector<int>>&ans,int val){

        while(left<right){

           if(nums[left]+nums[right]>target)
           right--;

           else if(nums[left]+nums[right]<target) 
           left++;
           // target match
           else{
           // remove duplicate
           while(left<right && nums[left]==nums[left+1]){
            left++;
           }

             while(left<right && nums[right]==nums[right-1]){
             right--;
           }

           ans.push_back({val,nums[left],nums[right]});
           left++;
           right--;

           }
        }

    }

void threeSum(vector<int>& nums,int sum) {
    vector<vector<int>>ans;

        // sort to use 2 pointer technique
         sort(nums.begin(),nums.end());
         int size=nums.size();

         for(int i=0;i<size;i++){
            if(i>0 && nums[i]==nums[i-1])
            continue;

        int target=sum-nums[i];
         two_sum(nums,i+1,size-1,target,ans,nums[i]);

         }

         for(auto elem:ans){
             for(auto ele:elem){
                 cout<<ele<<" ";
             }
             cout<<endl;
         }
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    threeSum(arr,x);

    return 0;
}
