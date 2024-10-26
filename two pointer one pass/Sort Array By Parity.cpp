#include<bits/stdc++.h>
using namespace std;

// Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

// Return any array that satisfies this condition.
// follow up: solve it in one pass and O(1) space complexity and without using any extra space

   void sortArrayByParity(vector<int>& nums) {
    // two pointer approach
       int size=nums.size();
       int lft=0,rgt=size-1;

       while(lft<=rgt){

    while(lft<=rgt && (nums[lft]%2==0 )){
               lft++;
           }

      while(lft<=rgt&& (nums[rgt]&1)){
         rgt--;
           }
           if(lft<=rgt){
           swap(nums[lft],nums[rgt]);
           lft++;
           rgt--;
           }

       }
       
    }

int main()
{
    int size;
    cout<<"Enter the size of the array\n";
    cin>>size;
    vector<int>arr(size);

    cout<<"Enter the elements of the array\n";

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    sortArrayByParity(arr);

    for (int num : arr) {
        cout << num << " ";
    }
 
    return 0;
}