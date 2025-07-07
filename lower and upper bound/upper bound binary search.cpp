#include<bits/stdc++.h>
using namespace std;
 
int upperBound(vector<int>&arr, int target) {
       
    int size=arr.size();
        
    int start=0,end=size-1;
    int ansidx=-1;
    int mid=-1;
     
     while(start<=end){
         
     mid=start+(end-start)/2;
     
     if(arr[mid]>target){
            
     ansidx=mid;
      end=mid-1;
     }
     
     else
    start=mid+1;
     }
     
     return ansidx;
    }


int main()
{
  int size;
  cout<<"enter size of array\n";
  cin>>size;
 vector<int> arr(size);
    cout<<"enter  element of array in sorted order"<<"\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
 cout<<"enter element to find upper bound\n";
 int val;
 cin>>val;
 int idx=upperBound(arr,val);
 if(idx==-1)
 cout<<"upper bound not found\n";
 else
cout<<"upper bound found at index: "<<idx<<" and value is "<<arr[idx];
 
 return 0;
}