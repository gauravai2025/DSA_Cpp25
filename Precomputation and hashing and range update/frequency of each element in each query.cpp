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
    int q;
    cout<<"enter number of queries\n";
    cin>>q;
    int queries[q]={0};

    for(int i=0;i<q;i++){
    cin>>queries[i];
    }

    for(int i=0;i<q;i++){
        cout<<f[queries[i]]<<" ";
    }

    return 0;

}
