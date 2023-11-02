#include<bits/stdc++.h>
using namespace std;
int main() {
    cout<<"enter size of array\n";
    int size ;
    cin>>size ;
    int *arr=new int[size ];
    cout<<"enter element of array\n";
    for(int i=0;i<size ;i++){
        cin>>arr[i];
        }
   cout<<"minimum element of array: "<<*min_element(arr, arr + size)<<endl;
   cout<<"minimum element of array at index: "<<min_element(arr, arr + size)-arr;
    
    return 0;
}