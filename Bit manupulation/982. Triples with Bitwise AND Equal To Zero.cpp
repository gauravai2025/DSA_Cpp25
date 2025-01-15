#include<bits/stdc++.h>
using namespace std;

// 982. Triples with Bitwise AND Equal To Zero

// Given an integer array nums, return the number of AND triples.

// An AND triple is a triple of indices (i, j, k) such that:

// 0 <= i < nums.length
// 0 <= j < nums.length
// 0 <= k < nums.length
// nums[i] & nums[j] & nums[k] == 0, where & represents the bitwise-AND operator.

int countTriplets(vector<int>& nums){

    int mx=*max_element(nums.begin(),nums.end());
    
    int msb=0;

    if(mx!=0)
    msb=log2(mx);
   
     msb++;

    unordered_map<int,int>mp;
    int size=nums.size();

    for(int i=0;i<(1<<msb);i++){

    for(int j=0;j<size;j++){
        if((i|nums[j])==i)
        mp[i]++;
    }

    }
  
  long long int ans=0;

   for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        int val=nums[i]&nums[j];
        int valcomp=0;
        for(int k=0;k<msb;k++){
            if((val&(1<<k))==0)
            valcomp|=(1<<k);

        }
        ans+=mp[valcomp];
        
    }

   } 
   
   return ans;  
    }

 
int main()
{
int size;
cout<<"Enter the size of array\n";
cin>>size;

vector<int>nums(size);
cout<<"Enter the element of array\n";
for(int i=0;i<size;i++){
cin>>nums[i];
}

cout<<countTriplets(nums);
 return 0;
}