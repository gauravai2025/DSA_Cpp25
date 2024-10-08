#include<bits/stdc++.h>
using namespace std;

long long  int count_num( long long  int  curr,long long  int  next,long long  int  n)
{
    long long  int  cnt=0;

    while(curr<=n){
     cnt+=next-curr;

     curr*=10;
     next*=10;

     next=min(next,n+1);
    }

    return cnt;
}

    long long  int  findKthNumber(long long  int  n, long long  int  k) {

          long long  int  curr=1;
          k--;

        while(k>0){
            
         long long  int  currprecnt=count_num(curr,curr+1,n);

         if(currprecnt<=k){
            curr++;
            k-=currprecnt;

         }

         else{
           k-=1;
           curr*=10;

        }

        }

        return curr;
        
    }
 
int main()
{

    int n,k;
    cout<<"enter value of n and k\n";
    cin>>n>>k;

    cout<<findKthNumber(n,k);
    return 0;
}