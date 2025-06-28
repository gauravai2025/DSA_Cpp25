#include<bits/stdc++.h>
using namespace std;

int longest_subarray(vector<int>&arr,int n,int k){

int cnt=1;
int mxlen=0;

for(int i=1;i<n;i++){

if(arr[i]-arr[i-1]>k){
    mxlen=max(mxlen,cnt);
    cnt=1;  
}
else
cnt++;
}

mxlen=max(mxlen,cnt);

return mxlen;
}
 
int main()
{
 int n,k;
 cin>>n>>k;
 
 vector<int>arr(n);

 for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<"longest subarray: "<<longest_subarray(arr,n,k);
return 0;
}