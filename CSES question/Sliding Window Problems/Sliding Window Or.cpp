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
    vector<int>bit(32,0);

    while(right<n){
      
    for(int i=0;i<=31;i++){
        if(arr[right]&(1ll<<i))
        bit[i]++;
    }

        if(right-left+1==k){
          sum=0;  

        for(int i=0;i<=31;i++){
        if(bit[i]>0)
        sum+=(1ll<<i);
        } 

         xorval^=sum;

        for(int i=0;i<=31;i++){
        if(arr[left]&(1ll<<i))
        bit[i]--;
    }
    left++;   
    }

     right++;
    }

    cout<<xorval;
 
    return 0;
}