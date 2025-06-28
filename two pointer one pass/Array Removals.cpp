#include<bits/stdc++.h>
using namespace std;

// Given an array arr[] of size N and an integer K. The task is to find the minimum number of elements that should be removed, such that Amax-Amin<=K. After the removal of elements, Amax and Amin is considered among the remaining elements. 

 int removals(vector<int>& arr, int k){
       
       int i=0,j=0;
        sort(arr.begin(),arr.end());
        
        int ans=0;
        
        while(j<arr.size()){
        
        int diff=arr[j]-arr[i];
        
        if(diff<=k) 
        ans=max(ans,j-i+1);
        
        if(diff>k)
        i++;
        else
        j++;
        }
        
        return arr.size()-ans;
    }
 
int main()
{
    int size;
    cout<<"Enter the size of array\n";
    cin>>size;

    vector<int> arr(size);
    cout<<"Enter the element of array\n";

    for(int i=0;i<size;i++){
    cin>>arr[i];
    }

    int k;
    cout<<"Enter the value of k\n";
    cin>>k;

    cout<<"Minimum number of elements that should be removed: "<<removals(arr,k);
 
 
    return 0;
}