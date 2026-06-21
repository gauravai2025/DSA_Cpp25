// The alternating sum of a 0-indexed array is defined as the sum of the elements at even indices minus the sum of the elements at odd indices.

// For example, the alternating sum of [4,2,5,3] is (4 + 5) - (2 + 3) = 4.
// Given an array nums, return the maximum alternating sum of any subsequence of nums (after reindexing the elements of the subsequence).
// you can rearrange given in any order before taking subsequence of array

// A subsequence of an array is a new array generated from the original array by deleting some elements(possibly none) without changing the remaining elements' relative order. For example, [2,7,4] is a subsequence of [4,2,3,7,2,1,4] (the underlined elements), while [2,4,2] is not.

// Example 1:

// Input: nums = [4,2,5,3]
// Output: 7
// Explanation: It is optimal to choose the subsequence [4,2,5] with alternating sum (4 + 5) - 2 = 7.
// Example 2:

// Input: nums = [5,6,7,8]
// Output: 8
// Explanation: It is optimal to choose the subsequence [8] with alternating sum 8.
// Example 3:

// Input: nums = [6,2,1,2,4,5]
// Output: 10
// Explanation: It is optimal to choose the subsequence [6,1,5] with alternating sum (6 + 5) - 1 = 10.
 
// Constraints:

// 1 <= nums.length <= 105
// 1 <= nums[i] <= 105

#include<bits/stdc++.h>
using namespace std;

 long long maxAlternatingSum(vector<int>& nums) {
        
    sort(nums.begin(),nums.end());
    int size=nums.size();
    long long int ans=nums[size-1];
    long long int currsum=nums[size-1];

    int left=0,right=size-2;

    while(left<=right){
     currsum+=nums[right]-nums[left];
     ans=max(ans,currsum);
     left++;
     right--;
    }
    return ans;
    }
 
int main()
{
    int size;
    cin>>size;
    vector<int>arr(size,0);
    for(int i=0;i<size;i++){
     cin>>arr[i];
    }
    cout<<maxAlternatingSum(arr);
    return 0;
}