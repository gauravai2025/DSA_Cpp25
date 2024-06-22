#include<bits/stdc++.h>
using namespace std;

bool divison_array(int a[],int n,int k,long long int mid){

    long long int sum=0;
    int cnt=0;

    for(int i=0;i<n;i++){

     if(a[i]>mid)
        return 0;

    if((sum+a[i])<=mid){
    sum+=a[i];
    }
    
    else{
    sum=a[i];
    cnt++;
    }
        
    }
cnt++;


if(cnt<=k)
return 1;
else
return 0;


}
 
int main()
{

int n,k;
cin>>n>>k;
int a[n];

for(int i=0;i<n;i++){
cin>>a[i];
}
 
long long int st=*max_element(a,a+n);
long long int end=accumulate(a,a+n,0ll);
long long int ans=0;
long long int mid=0;

while(st<=end){
    mid=(st+end)/2;

    if(divison_array(a,n,k,mid)){
        ans=mid;
        end=mid-1;
        
    }

    else{
  st=mid+1;
    }
}

cout<<ans<<endl;
 
    return 0;
}