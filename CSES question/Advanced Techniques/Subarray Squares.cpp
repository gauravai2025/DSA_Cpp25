#include<bits/stdc++.h>
using namespace std;

long long int total_cost(long long int *a,long long int max_sum,int n){
    long long int sum=0;
    long long tl_cost=0;

    for(int i=0;i<n;i++){
    if(sum+a[i]<=max_sum){
        sum+=a[i];
        
    }
    else{
        tl_cost+=sum*sum;
        sum=a[i];
    }
    }

return tl_cost+sum*sum;
}

 bool isvalid(long long int *a,int n,int m,long long int mid){
    long long int sum=0;
        int cnt=1;
        
     for(int i=0;i<n;i++){
        if(sum+a[i]<=mid){
            sum+=a[i];
        }
        else{
            cnt++;
            if(a[i]>mid)
            return 0;
         
            sum=a[i];
        }
     }
     
     if(cnt>m)
     return 0;
     else
     return 1;
        
    }




long long findPages(int n,long long  int arr[], int m) 
    {
      
        
        long long int sum=0;
         for(int i=0;i<n;i++){
             sum+=arr[i];
         }
         
       long long  int st=0;
       long long  int end=sum;
       long long  int mid;
       long long int ans=-1;
       
       while(st<=end){
         mid=(st+end)/2;
        if(isvalid(arr,n,m,mid)){
        end=mid-1;
        ans=mid;
        }
        else
        st=mid+1;
        }
           
        return ans;   
    }
 
int main()
{

int n,k;
cin>>n>>k;

long long int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
   
}

int max_sum=findPages(n,arr,k);

cout<<total_cost(arr,max_sum,n);
 
 
 
    return 0;
}