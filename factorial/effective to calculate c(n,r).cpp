#include<bits/stdc++.h>
using namespace std;

 long long int binomialcofficient(int n,int r){
    if(r>n-r)  // ncr=nc(n-r)
    r=n-r;
    long long int res=1;
    for(int i=0;i<r;i++){
        res*=(n-i);
        res/=(i+1); // ncr=nc(n-r)/r!
    }
    return res;
    // long long int ans=1;
    // long long int r1=1;
    // int i=0;
    // while( r!=0){
    //     ans*=(n-i);
    //     r1*=i+1;
    //     int gcd=__gcd(ans,r1);
    //     ans/=gcd;
    //     r1/=gcd;
    //    i++;
    //    r--;
    // }
    // return ans/r1;

 }
 
int main()
{
cout<<"Enter n and r: \n";
int n,r;
cin>>n>>r;
cout<<binomialcofficient(n,r);
    return 0;
}