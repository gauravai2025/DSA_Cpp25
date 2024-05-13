#include<bits/stdc++.h>
using namespace std;
 int const N=100000;
 int const M=1000000007;
 
int main()
{
// precomputation of fibonacci sequence
    long long int fib[N+1];
    fib[0]=0;
    fib[1]=1;

    for(int i=2;i<=N;i++){
        fib[i]=(fib[i-1]+fib[i-2])%M;
    }
   
 
cout<<"enter number of queries:\n";
int q;
cin>>q;
int arr[q];
cout<<"enter the queries:\n";
for(int i=0;i<q;i++){
    cin>>arr[i];
}

for(int i=0;i<q;i++){
    cout<<fib[arr[i]]<<"\n";
}
    return 0;
}