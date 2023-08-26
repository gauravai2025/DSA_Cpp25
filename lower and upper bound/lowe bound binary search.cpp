#include<bits/stdc++.h>
using namespace std;
 
 int lower_bound(int a[], int size, int val) {
    int lo = 0;
    int hi = size - 1;
    int mid;
    
    while (hi - lo > 1) {
        mid = lo + (hi - lo) / 2;
        if (a[mid] <= val)
            lo = mid;
        else
            hi = mid - 1;
    }
    
    if (a[hi] <= val)
        return hi;
    else if (a[lo] <= val)
        return lo;
    else
        return -1; // No value less than or equal to val found lower bound not found
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
 cout<<"enter element to find lower bound\n";
 int val;
 cin>>val;
 int idx=lower_bound(a,size,val);
 if(idx==-1)
 cout<<"lower bound not found\n";
 else
cout<<"lower bound at index: "<<idx<<" and value is "<<a[idx];
 
 
    return 0;
}