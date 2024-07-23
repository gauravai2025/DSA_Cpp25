#include<bits/stdc++.h>
using namespace std;
 
 int upper_bound(int a[],int size,int val){
    long long  int lo=0;
     long long  int  hi=size-1;
     long long  int mid;

    while(hi-lo>1){
        mid=lo+(hi-lo)/2;
        if(a[mid]<=val)
        lo=mid+1;
        else
        hi=mid;
    }

    if(a[lo]>val)
    return lo;
    else if(a[hi]>val)
    return hi;
    else
    return -1; // upper bound  not found  return size in stl upper bound

 }
int main()
{
  int size;
  cout<<"enter size of array\n";
  cin>>size;
  int a[size];
    cout<<"enter  element of array in sorted order"<<"\n";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
 cout<<"enter element to find upper bound\n";
 int val;
 cin>>val;
 int idx=upper_bound(a,size,val);
 if(idx==-1)
 cout<<"upper bound not found\n";
 else
cout<<"upper bound found at index: "<<idx<<" and value is "<<a[idx];
 
 
    return 0;
}