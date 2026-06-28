#include<bits/stdc++.h>
using namespace std;

 long long int binomialcofficient(int n,int r,int mod){

    if(r>n)
    return 0;

    if(r>n-r)  // ncr=nc(n-r)
    r=n-r;

    long long int res=1;

    for(int i=0;i<r;i++){
        res*=((n-i))%mod;
        res/=(i+1); // ncr=nc(n-r)/r!
        res%=mod;
    }
    
    return res%mod;
 }
 
int main()
{
// mod value may not prime number
cout<<"Enter n and r mod value: \n";
int n,r,mod;
cin>>n>>r>>mod;
cout<<binomialcofficient(n,r,mod);
return 0;
}