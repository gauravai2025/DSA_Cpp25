#include<bits/stdc++.h>
using namespace std;

int squqre_root(int n){

 if(n==0 || n==1)
    return n;

    long long int lo=1;
    long long int hi=n;
    long long int mid;

    while(lo<=hi){
       mid=lo+(hi-lo)/2;

       if(mid==n/mid)
       return mid;

       if(mid<n/mid)
       lo=mid+1;
       else
      hi=mid-1;
    }

    return hi;
}
 
int main()
{
int num;
cin>>num;

cout<<squqre_root(num);
 
    return 0;
}