#include<iostream>
using namespace std;
int main(){
    int n;
    int n;
    cout<<"enter size oof array\n";
    cin>>n;
    int arr[n];
   int  f[n]={0};
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
