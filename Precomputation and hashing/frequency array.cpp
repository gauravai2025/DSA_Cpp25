#include<iostream>
using namespace std;
int const N=100000;
int main(){
    int n;
    cout<<"enter size of array\n";
    cin>>n;
    int arr[n];
   int  f[N]={0};
    cout<<"enter element of array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        f[arr[i]]++;    // f array contains frequency of each element

    }
    int i=0;
    while(f[i]!='\0'){
    cout<<f[i]<<" ";
    i++;
    }
    return 0;

}
