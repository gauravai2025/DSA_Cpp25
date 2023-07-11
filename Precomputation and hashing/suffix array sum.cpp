#include<bits/stdc++.h>
using namespace std;
 
int main()
{
     int n;
    cout<<"enter size of array\n";
    cin>>n;
    int arr[n];
 long long int suffix[n]; // prefix sum array
   
    cout<<"enter element of array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     suffix[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        suffix[i]=suffix[i+1]+arr[i]; // suffix sum array  contains sum of all elements from i to n-1
    }
cout<<"enter position upto which you want to print suffix sum array\n";
    int pos;
    cin>>pos;
    cout<<"suffix sum array is upto given position\n";
    cout<<suffix[pos-1]<<endl;
 for(int i=0;i<n;i++){
        cout<<suffix[i]<<" ";
    }
 
 
    return 0;
}