#include<bits/stdc++.h>
using namespace std;

bool ternary_search(int arr[],int size,int key){

    int st=0;
    int end=size-1;
    int mid1=0;
    int mid2=0;

    while(st<=end){
    mid1=st+(end-st)/3;
    mid2=end-(end-st)/3;
    if(arr[mid1]==key || arr[mid2]==key)
    return 1;

    if(arr[mid1]>key)
    end=mid1-1;
    else if(arr[mid2]<key)
    st=mid2+1;
    else{
        st=mid1+1;
        end=mid2-1;
    }

    }

    return 0;
}
 
int main()
{
cout<<"enter size of array: \n";
int size;
cin>>size;
int arr[size];
cout<<"enter element of array: \n";

for(int i=0;i<size;i++){
    cin>>arr[i];
}

cout<<"enter element to be searched: \n";
int key;
cin>>key;
if(ternary_search(arr,size,key))
cout<<"element found\n";
else
cout<<"element not found\n";
    return 0;
}