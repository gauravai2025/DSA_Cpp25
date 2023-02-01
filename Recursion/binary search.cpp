#include<iostream>
using namespace std;

void print(int arr[], int s, int e) {

    for(int i=s; i<=e; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

bool binarysearch(int *arr, int s, int e , int k ) {
print(arr,s,e);
    //base case

    //element not found
    if(s>e)
        return false;
    int mid = s + (e-s)/2;
    //element found
    if(arr[mid] == k)
        return true;
    if(arr[mid] < k) {
        return binarysearch(arr, mid+1, e, k);
    }
    else{
        return binarysearch(arr, s, mid-1, k);
    }
}


int main() {
  cout<<"enter size of array\n";
    int size ;
    cin>>size ;
    int *arr=new int[size ];
    cout<<"enter element of array\n";
    for(int i=0;i<size ;i++){
        cin>>arr[i];
    }
    cout<<"enter key to search\n";
    int key;
    cin>>key;
    if(binarysearch(arr,0,size-1,key))
    cout<<"found\n";
    else
    cout<<"Not found\n";
    return 0;
}