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
   if(is_sorted(arr, arr + size)) // return type bool
   cout<<"sorted\n";
   else
   cout<<"NO\n";
    return 0;
}