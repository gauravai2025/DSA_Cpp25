#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int n;
    cout<<"enter size of array\n";
    cin>>n;
    int arr[n];

 long long int pre[n+1]; // prefix sum array
    pre[0]=0;

    cout<<"enter element of array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        pre[i+1]=pre[i]+arr[i]; // prefix sum array  contains sum of all elements from 0 to i
    }
    
    cout<<"enter position upto which you want to print prefix sum array\n";
    int pos;
    cin>>pos;
    cout<<"prefix sum array is upto given position\n";
    cout<<pre[pos]<<endl;

 int q;
    cout<<"enter no of queries\n";
    cin>>q;
    while(q--){
        int l,r;
        cout<<"enter l and r\n";
        cin>>l>>r;
        cout<<pre[r]-pre[l-1]<<endl; // sum of elements from l to r
    }
 
 
    return 0;
}