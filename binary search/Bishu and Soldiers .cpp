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

// sort(a,a+n);
int cnt=0,sum=0;
int x;

 while(q--){
    cnt=0;sum=0;
cin>>x;
for(int i=0;i<n;i++)
{
if(a[i]<=x){
sum+=a[i];
cnt++;
}
 }
 cout<<cnt<<" "<<sum<<endl;
 
 }
    return 0;
}