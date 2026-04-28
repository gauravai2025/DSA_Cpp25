#include<bits/stdc++.h>
using namespace std;

int smallestSumSubarray(vector<int>&arr){
   
    long long  int sum=0;
    long long int mnsum=INT_MAX;
      
    for(int i=0;i<arr.size();i++){
        
     sum+=arr[i];
     mnsum=min(mnsum,sum);
      
    if(sum>0){
    sum=0;
   
    }
    
    }
    return mnsum;
  }
 
int main()
{
    int size;
    cout<<"Enter the size of array\n";
    cin>>size;

    vector<int>arr(size);
    cout<<"Enter the element of array\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Smallest sum contiguous subarray: "<<smallestSumSubarray(arr);
    return 0;
}