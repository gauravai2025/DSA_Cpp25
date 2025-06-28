#include<bits/stdc++.h>
using namespace std;
 
 int first_occurence(int a[],int size,int key){
     int start=0,end=size-1;
     int mid=0;
     int ans=-1;

while(start<=end){
   
  mid=start+(end-start)/2;
  
        if(a[mid]==key){
        end=mid-1;
        ans=mid;
    }  // search for leftmost occurence of element
        
    else if(key>a[mid]){   // position -1 in output means absence of number in array
    start=mid+1;
}
    
    else if(key<a[mid]){
    end=mid-1;
}
   

}
return ans;
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
 cout<<"enter element to find first occurence\n";
 int val;
 cin>>val;
cout<<"first occurence of element at index: "<<first_occurence(a,size,val);
 
 
 
    return 0;
}