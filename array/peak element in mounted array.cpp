#include<iostream>
using namespace std;
int peakelement(int a[],int n){
    int start=0,end=n-1;
    while(start<=end){
    int mid=start+(end-start)/2;
    if(a[mid-1]<a[mid]>a[mid+1])
    return a[mid];
    else if(a[mid-1]>a[mid]>a[mid+1])
    start=mid+1;
    else if(a[mid]<a[mid]<a[mid+1])
     end=mid-1;
    }

    
}
int main(){
    int n;
    cout<<"enter size of array\n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   
    cout<<peakelement(a,n);
     return 0;
}