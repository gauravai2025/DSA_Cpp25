#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int n;
cin>>n;
vector<long long>arr(n);

for(int i=0;i<n;i++){
    cin>>arr[i];
}

sort(arr.begin(),arr.end());    

int val=arr[n/2];

long long ans=0;

for(int i=0;i<n;i++){
    ans+=abs(arr[i]-val);
}

cout<<ans;
 
 
 
    return 0;
}