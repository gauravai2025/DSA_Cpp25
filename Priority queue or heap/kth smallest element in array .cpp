#include<bits/stdc++.h>
using namespace std;

 int findKthsmallest(int*arr, int k,int size) {
        // Creates a max heap
    priority_queue <int>pq;
    for(int i=0;i<k;i++){
     pq.push(arr[i]);
    }

    for(int i=k;i<size;i++){
    if (arr[i] < pq.top()) {
        pq.pop();
        pq.push(arr[i]);
    }
    }
    return pq.top();
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
  cout<<"enter value of k: \n";
    int k;
    cin>>k;
    cout<<"kth largest element: "<<findKthsmallest(arr,k,size)<<"\n";

    return 0;
}