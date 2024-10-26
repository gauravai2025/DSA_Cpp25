#include<bits/stdc++.h>
using namespace std;

// Given an array of integers nums, half of the integers in nums are odd, and the other half are even.

// Sort the array so that whenever nums[i] is odd, i is odd, and whenever nums[i] is even, i is even.
 
//  Follow Up: Could you solve it in-place?

vector<int> sortArrayByParityII(vector<int>& nums) {
        
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
    
    sortArrayByParityII(arr);

    for (int num : arr) {
        cout << num << " ";
    }
 
    return 0;
}