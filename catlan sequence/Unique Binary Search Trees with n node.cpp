#include<bits/stdc++.h>
using namespace std;

  long long int binomialcofficient(int n,int r){
    if(r>n-r)  // ncr=nc(n-r)
    r=n-r;
    long long int res=1;
    for(int i=0;i<r;i++){
        res*=(n-i);
       // res=res%mod;
        res/=(i+1); // ncr=nc(n-r)/r!
    }
    return res;
  
 }
 

long long int catlan(int n){
  return binomialcofficient(2*n,n)/(n+1);
}


 int numTrees(int n) {
    return catlan(n);
    
}
 
int main()
{

int n;
cin>>n;
cout<<numTrees(n);
 return 0;
}