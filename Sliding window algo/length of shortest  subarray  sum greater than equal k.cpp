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
    int ans=INT_MAX;
    int stidx=-1;

    while(j<n){
    
    sum+=arr[j];

    while(i<=j && sum>=k){
    ans=min(ans,j-i+1);
    sum-=arr[i];
    i++;
    }

    j++;
    }
  
  if(ans==INT_MAX)
  ans=-1;
  cout<<ans<<endl;

  return 0;
}