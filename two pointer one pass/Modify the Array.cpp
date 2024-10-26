#include<bits/stdc++.h>
using namespace std;

// Given an array arr. Return the modified array in such a way that if the current and next numbers are valid numbers and are equal then double the current number value and replace the next number with 0. After the modification, rearrange the array such that all 0's are shifted to the end.

// Note:

// Assume ‘0’ as the invalid number and all others as a valid number.
// The sequence of the valid numbers is present in the same order.


  vector<int> modifyAndRearrangeArray(vector<int> &arr, vector<int>&modifiedArray) {
    int n = arr.size();
    int left = 0, right = n - 1;  // Two pointers to keep track of the left and right end of the result array
   
    for (int i = 0; i <n; i++) {
        
        if (arr[i] != 0 && i < n - 1 && arr[i] == arr[i + 1]) {
            result[left++] = arr[i] * 2;
            result[right--] = 0;
            i++;  // Skip the next element since it's merged
        } 
        
        else if (arr[i] != 0) {
            result[left++] = arr[i];
        }
        
        else if (arr[i] == 0) {
            result[right--] = 0;
        }
    }

   
    }

 
int main()
{
  
    int size=0;
    cout<<"Enter the size of the array\n";
    cin>>size;
    vector<int> arr(size);
    cout<<"Enter the elements of the array\n";

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
   
    vector<int>modifiedArray(size);
    modifyAndRearrangeArray(arr,modifiedArray);

    for (int num : modifiedArray) {
        cout << num << " ";
    }

    return 0;
}