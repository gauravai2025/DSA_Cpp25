#include<bits/stdc++.h>
using namespace std;
 
int main()
{

    int n;
    cin>>n;
    int l,r;
    cin>>l>>r;
    int a[n];

    for(int i=0;i<n;i++){
    cin>>a[i];
    }

    sort(a,a+n);

    long long int ans=0;

    for(int i=0;i<n;i++){

    int val1=l-a[i];
    int val2=r-a[i];
    int idx1=lower_bound(a,a+n,val1)-a;
    int idx2=upper_bound(a,a+n,val2)-a;

    if(idx1==n|| idx2==0)
         continue;
    
    else{
    ans+=(idx2-idx1);
    if(a[i]>=val1 && a[i]<=val2)
    ans--;
    }
    
    }

 cout<<ans/2<<endl;
 
    return 0;
}