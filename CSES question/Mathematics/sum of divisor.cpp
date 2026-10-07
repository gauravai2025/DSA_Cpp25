#include<bits/stdc++.h>
using namespace std;
 
const int mod=1e9+7;
const long long INV2 = 500000004;
 
int main()
{
  long long int n;
  cin>>n;
  long long int sum=0;

  long long int d=1;
 
  while(d<=n){
 
  long long int q=(n/d);
  long long l=d;
  long long int r=n/q;  // last d giving same q
  q%=mod;

  long long int sumg=(((r-l+1)%mod)*((r+l)%mod))%mod;
  sumg=(sumg*INV2)%mod;
  sum+=(q*sumg)%mod;
  sum%=mod;
  d=r+1;
  }
 
  cout<<sum;
  return 0;
}
