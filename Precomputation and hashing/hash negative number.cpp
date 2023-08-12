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

    int min1=INT16_MAX;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(min1<arr[i])
        min1=arr[i];   // find minimum element
    }

    min1=abs(min1);

       for(int i=0;i<n;i++){
          f[arr[i]+min1]++;      // f array contains frequency of each element
       }

int q;
cout<<"enter number of queries\n";
cin>>q;
int queries[q];
    
    for(int i=0;i<q;i++){
    cin>>queries[i];
    }

     for(int i=0;i<q;i++){
        cout<<f[queries[i]+min1]<<" ";
     }

    return 0;

}
