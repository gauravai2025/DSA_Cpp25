#include<bits/stdc++.h>
using namespace std;

// predicate function

bool min_time(int arr[],long long int time,long long int t,int n){

  long long product=0;

    for(int i=0;i<n;i++){
    product+=(time/arr[i]);
    if(product>=t)
    return 1;
    }

    if(product>=t)
    return 1;
    else
    return 0;
}
 
int main()
{

int n;
long long int t;
cin>>n>>t;

int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}

long long int st=1,end=1e18;
long long int ans=0,mid=0;

while(st<=end){
    mid=st+(end-st)/2;

if(min_time(arr,mid,t,n)){
   ans=mid;
   end=mid-1;
    }

else
st=mid+1;
}

cout<<ans<<endl;
 return 0;
}