#include<bits/stdc++.h>
using namespace std;

  int maxSumPairWithDifferenceLessThanK(int arr[], int N, int k)
{
    sort(arr,arr+N);
    int mxsum=0;
    int right=N-1;
    
    while(right>=0){

    if( right-1>=0 && abs(arr[right]-arr[right-1])<k){
    mxsum+=arr[right]+arr[right-1];
    right-=2;
}  
        
    else
    right--;   
    }
    
    return mxsum;
    }

int main()
{

int size;
cout<<"Enter the size of array\n";
cin>>size;

int arr[size];
cout<<"Enter the element of array\n";
for(int i=0;i<size;i++){
cin>>arr[i];
}

int k;
cout<<"Enter the value of k\n";
cin>>k;

cout<<"Maximum sum of all pairs with difference less than k: "<<maxSumPairWithDifferenceLessThanK(arr,size,k);
 
return 0;
}