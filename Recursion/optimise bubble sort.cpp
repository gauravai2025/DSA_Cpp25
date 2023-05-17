#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int *arr,int size){
 bool flag=0;
// base case
if(size<=1 )
return;

   for(int j=0;j<size-1;j++){
    if(arr[j]>arr[j+1]){  // condition not satified then array already sorted
    swap(arr[j],arr[j+1]); 
    flag=1;
    }
    
}
if(flag==0)
return ;
return bubble_sort(arr,size-1);


}
 
int main()
{
cout<<"enter array size\n";
int size;
cin>>size;
int *arr=new int[size ];
cout<<"enetr array\n";
for(int i=0;i<size;i++){
    cin>>arr[i];
}
bubble_sort(arr,size);
cout<<"sorted array\n";
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}