#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int n,k;
    cin>>n>>k;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i=0, j=0;
    long long int sum=0;
    long long int ans=0;

    while(j<n){
    
    sum+=arr[j];

    // if(sum<=k)
    // ans+=(j-i+1);

    while(i<=j && sum>k){
    sum-=arr[i];
    i++;
    }
    
    if(sum<=k)
    ans+=(j-i+1);

    j++;
    
    }

    cout<<ans<<endl;
    return 0;
}