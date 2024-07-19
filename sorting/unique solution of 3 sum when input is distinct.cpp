#include <bits/stdc++.h>
using namespace std;


void two_sum(vector<int>& nums, int target, vector<int>& results, int idx) {

   unordered_map<int,int>mp;
   int size=nums.size();


   for(int i=0;i<size;i++){
    if(i==idx)
    continue;
    int find=target-nums[i];

    if(mp.find(find)!=mp.end()){
        results.push_back(nums[i]);
        results.push_back(find);
        results.push_back(nums[idx]);
    }

     if(mp.find(nums[i])==mp.end())
     mp[nums[i]]=i;

   }
}


void threeSum(vector<int>& nums,int sum) {
    vector<vector<int>>ans;

        // sort to use 2 pointer technique
         sort(nums.begin(),nums.end());
         int size=nums.size();

         for(int i=0;i<size;i++){
         
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
