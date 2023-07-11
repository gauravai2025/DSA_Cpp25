#include<iostream>
using namespace std;
int search(int a[],int size,int key){
     int start=0,end=size-1;
while(start<=end){
   
  int   mid=start+(end-start)/2;
        if(a[mid]==key){
        return mid+1;}
        
    else if(key>a[mid]){   // position -1 in output means absence of number in array
    start=mid+1;}
    
    else if(key<a[mid]){
    end=mid-1;}
   

}
return -1;
}
int main(){
    int a[5]={2,4,6,8,10};
    int b[6]={3,5,8,9,12,15};
    int n,m;
    cout<<"enter number search in 1st array"<<"\n";
    
    cin>>n;
     cout<<"enter number search in 2nd array"<<"\n";
    
    cin>>m;
    
  int index1=  search(a,5,n);
  cout<<"number "<<n<<"is present at position :"<<index1<<"\n";
   int index2=  search(b,6,m);
    cout<<"number "<<m<<"is present at position :" <<index2<<"\n";
}