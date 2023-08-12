#include<bits/stdc++.h>
using namespace std;

long long int ncr(int n,int r){
    if(r>n)
    return 0;
    if(r>n-r)  // ncr=nc(n-r)
    r=n-r;
    long long int res=1;
    for(int i=0;i<r;i++){
        res*=(n-i);
        res/=(i+1); // ncr=nc(n-r)/r!
    }
    return res;
}

 int kernighan(int n){
        int cnt=0;
        while(n){
            int rsbm=n&(-n);
            n-=rsbm;
            cnt++;
        }
        return cnt;
 }


long long int sol(long long int num,int cntbit,int i) {
    int ans=0;
    if(i==0){
        return 0;
    }

  long long int mask=1ll<<i;

  if(mask&num){
long long int res1=sol(num,cntbit-1,i-1);
long long int res0=ncr(i,cntbit);
ans=res1+res0;

  }

  else{
ans=sol(num,cntbit,i-1);
  }
  return ans;

}
 
int main()
{
cout<<"enter number\n";
int n;
cin>>n;
int cntbit=kernighan(n);
// assuming n is 64 bit
long long int ans=sol(n,cntbit,63);
cout<<"number less than have same number of set bits as n are: "<<ans<<endl;
    return 0;
}