#include<bits/stdc++.h>
using namespace std;
 int equilibrium_point(long long int pre[],int n){
     for(int i=1;i<=n;i++){
        long long int left=pre[i-1];
        long long int right=pre[n]-pre[i];
        if(left==right){
          return i;
        }
    }
return -1;
 }
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
     cout<<"equilibrium position is: "<<equilibrium_point(pre,n)<<endl;
    
 
 
 
    return 0;
}