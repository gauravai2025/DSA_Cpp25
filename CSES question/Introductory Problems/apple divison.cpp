#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int n;
cin>>n;
long long int a[n];
long long int sum1=0,sum2=0;

for(int i=0;i<n;i++){
    cin>>a[i];
}

long long int mask=1<<n;
long long int ans=INT_MAX;

for(int i=1;i<mask;i++){
    sum1=0,sum2=0;
    for(int j=0;j<n;j++){
        if(i&(1ll<<j))
        sum1+=a[j];
        else
        sum2+=a[j];

    }
    ans=min(ans,abs(sum1-sum2));

}
cout<<ans<<endl;
    return 0;
}