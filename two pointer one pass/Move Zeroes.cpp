#include<bits/stdc++.h>
using namespace std;

// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.

void moveZeroes(vector<int>& nums){

    int size=nums.size();
    int st=0,end=0;

    while(st<size && end<size){

    while(st<size && nums[st]!=0){
        st++;
    }

    while(end<size && nums[end]==0){
      end++;
    }
     
    if(end<size && st<size && st<end){
    swap(nums[st],nums[end]);
    st++;
    end++;
    }
    else
    end++;

    }

    }
 
int main()
{
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;

    vector<int>nums(size);

    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>nums[i];
    }

    moveZeroes(nums);

    cout<<"The array after moving zeroes to the end is"<<endl;

    for(auto &it:nums){
        cout<<it<<" ";
    }

    return 0;
}