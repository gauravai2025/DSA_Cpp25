#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array\n";
    cin>>n;
    int arr[n];
   int  f[n]={0};
    cout<<"enter element of array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(f[arr[i]]==0){
        cout<<arr[i]<<" ";
        f[arr[i]]++;
        }
    }
    return 0;

}

// limation of this code is that it will not work for negative numbers
// not work for large numbers like 10^9 use large space
// size of frequency array is equal to maximum element of array
// if array contain 1 to 10^9 then size of frequency array is 10^9
// example: 2 4 6 10^5 10^9 to find frequency  we need to create array of size 10^9 for just 5 elements
