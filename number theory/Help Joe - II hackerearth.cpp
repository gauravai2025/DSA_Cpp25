#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int n,m;
cin>>n>>m;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    a[i]=a[i]%m;
}
sort(a,a+n);
    int q;
    cin>>q;
    while(q--){
    long long x;
    cin>>x;
    x=x%m;
    int idx=upper_bound(a,a+n,m-1-x)-a;
    if(idx!=0)
    idx--;
    cout<<max((x+a[idx])%m,(x+a[n-1])%m)<<endl;
    }
 
 
    return 0;
}