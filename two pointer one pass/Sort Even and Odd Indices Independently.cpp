#include<bits/stdc++.h>
using namespace std;

// You are given a 0-indexed integer array nums. Rearrange the values of nums according to the following rules:

// Sort the values at odd indices of nums in non-increasing order.
// For example, if nums = [4,1,2,3] before this step, it becomes [4,3,2,1] after. The values at odd indices 1 and 3 are sorted in non-increasing order.
// Sort the values at even indices of nums in non-decreasing order.
// For example, if nums = [4,1,2,3] before this step, it becomes [2,1,4,3] after. The values at even indices 0 and 2 are sorted in non-decreasing order.

vector<int> sortEvenOdd(vector<int>& nums) {
        
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
    
    sortEvenOdd(arr);

    for (int num : arr) {
        cout << num << " ";
    }
 
 
    return 0;
}