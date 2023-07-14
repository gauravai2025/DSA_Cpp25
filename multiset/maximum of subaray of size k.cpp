#include<bits/stdc++.h>
using namespace std;
 
void maxSlidingWindow(vector<int>& nums, int k,vector<int>&ans) {
  multiset<int>maxi;
  for(int i=0;i<k;i++){
maxi.insert(nums[i]);
  }   
  auto it1=maxi.end();
  it1--;
  ans.push_back(*it1);
  int st=0;
  for(int i=k;i<nums.size();i++){
   maxi.erase(maxi.find(nums[st]));
   maxi.insert(nums[i]);
 
    auto it = maxi.end();
    it--;
     ans.push_back(*it);

     st++;
  }

}


int main()
{
cout<<"Enter the size of array\n";
int n;
cin>>n;
vector<int>nums(n);
cout<<"Enter the elements of array\n";
for(int i=0;i<n;i++){
cin>>nums[i];
}
cout<<"Enter the size of subarray\n";
int k;
cin>>k;
vector<int>ans;
maxSlidingWindow(nums,k,ans);
cout<<"The maximum of each subarray of size k is\n";
for(int i=0;i<ans.size();i++){
cout<<ans[i]<<" ";
}
 
    return 0;
}
