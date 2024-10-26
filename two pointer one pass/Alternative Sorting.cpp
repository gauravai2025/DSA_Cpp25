#include<bits/stdc++.h>
using namespace std;

// Given an array arr of distinct integers. Rearrange the array in such a way that the first element is the largest and the second element is the smallest, the third element is the second largest and the fourth element is the second smallest, and so on.

// Expected Time Complexity: O(nlogn).
// Expected Auxiliary Space: O(n).

void  alternateSort(vector<int>& arr,vector<int>&ans) {
        
      sort(arr.begin(),arr.end());
      
      int left=0,right=arr.size()-1;
    
      while(left<=right){
         ans.push_back(arr[right]) ;
         if(left!=right)
          ans.push_back(arr[left]) ;
          
          left++;
          right--;
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
   
    vector<int>modifiedArray;
    alternateSort(arr,modifiedArray);

    for (int num : modifiedArray) {
        cout << num << " ";
    }
 
 
    return 0;
}