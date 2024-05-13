#include<bits/stdc++.h>
using namespace std;

int binary_search(int *a,int size,int key){
    int st=0;
    int end=size-1;
    int mid=0;

    while(st<=end){
        mid=st+(end-st)/2;

        if(a[mid]==key)
        return mid;

        else if(a[mid]>key)
        end=mid-1;

        else
        st=mid+1;
    }

    return -1;  // element not found
}

int modified_binary_search(int *a,int size,int key){
    int st=0;
    int end=size-1;
    int mid=0;

    while(st<=end){
        mid=st+(end-st)/2;

        if(a[mid]==key)
        return mid;

        else if(a[mid]>key)
        st=mid+1;

        else
        end=mid-1;
    }

    return -1;  // element not found
}
 
 
int main()
{
   int size;
  cout<<"enter size of array\n";
  cin>>size;
  int a[size];
    cout<<"enter  element of array in sorted order(descending order or ascending order) with all distinct elements"<<"\n";

    for(int i=0;i<size;i++){
        cin>>a[i];
    }

 cout<<"enter element to search\n";
 int key;
 cin>>key;

 if(size==1){
    if(a[0]==key)
    cout<<"element found at index: "<<0<<endl;
    else
    cout<<"element found at index: "<<-1<<endl;

 }
 else{

 if(a[0]>a[1])
cout<<"element found at index: "<<modified_binary_search(a,size,key);

else

 cout<<"element found at index: "<<binary_search(a,size,key);
 }
 
    return 0;
}