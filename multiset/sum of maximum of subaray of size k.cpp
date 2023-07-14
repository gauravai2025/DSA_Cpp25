#include<bits/stdc++.h>
using namespace std;
 
long long maxSlidingWindow(vector<int>& nums, int k) {
  multiset<int>maxi;   
  long long int sum=0;
  for(int i=0;i<k;i++){
maxi.insert(nums[i]);
  }   
  auto it1=maxi.end();
  it1--;
  sum+=(*it1);
  int st=0;
  for(int i=k;i<nums.size();i++){
   maxi.erase(maxi.find(nums[st]));
   maxi.insert(nums[i]);
 
    auto it = maxi.end();
    it--;
     sum+=(*it);

     st++;
  }
  return sum;

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
cout<<"The sumof  maximum of each subarray of size k is\n";
cout<<maxSlidingWindow(nums,k);

 
    return 0;
}
