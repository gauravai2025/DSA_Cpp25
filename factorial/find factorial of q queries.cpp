#include<bits/stdc++.h>
using namespace std;
 int const N=100000;
 int const M=1000000007;

int main()
{
    // precomputation of factorial
    long long int fact[N+1];
    fact[0]=1;
    for(int i=1;i<=N;i++){
        fact[i]=(fact[i-1]*i)%M;
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
    cout<<fact[arr[i]]<<"\n";
}

 
 
 
    return 0;
}