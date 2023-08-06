#include<bits/stdc++.h>
using namespace std;

 int findKthLargest(int*arr, int k,int size) {
         sort(arr,arr+size);
            return arr[k-1];
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
    cout<<"kth largest element: "<<findKthLargest(arr,k,size)<<"\n";

    return 0;
}