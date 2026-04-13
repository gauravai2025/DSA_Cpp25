#include<bits/stdc++.h>
using namespace std;

 long double binpow(long double x, int n){
     long double ans=1;
    while(n>0){

        if(n&1){
         ans=(ans*x);
        }

        x=(x*x);
        n=n>>1;
    }
    return ans;

}


 
int main()
{
int n,k;
cin>>n>>k;

 long double powk=binpow(k,n);
long double sum=0;

 for(int i=1;i<k;i++){
     sum+=binpow(i,n);
 }
 
 long double powkn1=binpow(k,n+1);
 long double ans=(powkn1-sum)/powk;
 cout<<fixed<<setprecision(6)<<ans;
 
    return 0;
}