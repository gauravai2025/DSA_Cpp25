#include<bits/stdc++.h>
using namespace std;

void minheap_heapify(vector<int>&arr,int size,int idx){  // time complexity - O(logn)

    int least=idx;
    int left=2*idx;
    int right=2*idx+1;

    if(left<=size && arr[left]<arr[least])
         least=left;

     if(right<=size && arr[right]<arr[least])
         least=right;

    if(least!=idx){
        swap(arr[least],arr[idx]);
        minheap_heapify(arr,size,least);
    }

}
 
 
int main()
{

int size;
cout<<"enter size of array\n";
cin>>size;
 
 vector<int>arr(size+1,-1);

 for(int i=1;i<=size;i++){
  cin>>arr[i];
 }

 // leaf node from (n/2+1) to n;
 // leaf node already satisfy min heap property and is at correct place

 for(int i=size/2;i>=1;i--){
    minheap_heapify(arr,size,i);
 }

 cout<<"min- heap:\n";

 for(int i=1;i<=size;i++){

cout<<arr[i]<<" ";

 }
 
 
    return 0;
}