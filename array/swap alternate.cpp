// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void swap(int arr[],int size){
   
    for (int i=0;i<size-1;i+=2){
        swap(arr[i],arr[i+1]);
        
    }
}
int main() {
   int n;
   cout<<"enter size of array\n";
   cin>>n;
   int a[n];
   cout<<"enter element of array\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    swap(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}