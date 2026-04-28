#include<bits/stdc++.h>
using namespace std;
 
int main()
{

    int n,k;
    cin>>n>>k;

   long long  int x,a,b,c;
    cin>>x>>a>>b>>c;

    vector<int>arr(n);
    arr[0]=x;

    for(int i=1;i<n;i++){
      arr[i]=(a*arr[i-1]+b)%c;
    }

    int left=0,right=0;
    long long int sum=0;
    long long int xorval=0;

    while(right<n){
      
        sum+=arr[right];

        if(right-left+1==k){
         xorval^=sum;
         sum-=arr[left];
         left++;   
        }
        right++;
    }

    cout<<xorval;
 
    return 0;
}