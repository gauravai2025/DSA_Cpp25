#include<bits/stdc++.h>
using namespace std;

void maxheap_heapify(vector<int>&arr,int size,int idx){  // time complexity - O(logn)

    int largest=idx;
    int left=2*idx;
    int right=2*idx+1;

    if(left<=size && arr[left]>arr[largest])
    largest=left;

     if(right<=size && arr[right]>arr[largest])
    largest=right;

    if(largest!=idx){
        swap(arr[largest],arr[idx]);
        maxheap_heapify(arr,size,largest);
    }

}
 // leaf node from (n/2+1) to n;
 // leaf node already satisfy max heap property and is at correct place

void build_heap(vector<int>&arr,int size){

 for(int i=size/2;i>=1;i--){
    maxheap_heapify(arr,size,i);
 }

}


void heap_sort(vector<int>&arr,int size){

    int n=size;

    while(n>1){
     //   step 1: replace last elemnt with first element and reduce size of heap
     swap(arr[1],arr[n]);
        n--;
        // step2: heapify the root node
        maxheap_heapify(arr,n,1);
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

build_heap(arr,size);

 cout<<"max- heap:\n";

 for(int i=1;i<=size;i++){

cout<<arr[i]<<" ";

 }

cout<<endl;

 heap_sort(arr,size);

    cout<<"sorted array:\n";

    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
    }
 
 
    return 0;
}