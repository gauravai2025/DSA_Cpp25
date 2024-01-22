#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int n;
cin>>n;
int a[n];   
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int q;
cin>>q;

sort(a,a+n);
// prefix sum
int pre[n];
pre[0]=a[0];
for(int i=1;i<n;i++)
{
    pre[i]=pre[i-1]+a[i];
}

int cnt=0,sum=0;
int x;

 while(q--){
cnt=0;sum=0;
cin>>x;
cnt=upper_bound(a,a+n,x)-a;
 cout<<cnt<<" "<<pre[cnt-1]<<endl;
 
 }
    return 0;
}