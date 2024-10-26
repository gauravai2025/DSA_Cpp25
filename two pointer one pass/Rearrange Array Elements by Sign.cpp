#include<bits/stdc++.h>
using namespace std;

// You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

// You should return the array of nums such that the the array follows the given conditions:

// Every consecutive pair of integers have opposite signs.
// For all integers with the same sign, the order in which they were present in nums is preserved.
// The rearranged array begins with a positive integer.

// It is not required to do the modifications in-place.

 vector<int>rearrangeArray(vector<int>&nums, vector<int>&result) {
        
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

    vector<int>result;
    
    rearrangeArray(arr,result);

    for (int num : result) {
        cout << num << " ";
    }
 
    return 0;
}