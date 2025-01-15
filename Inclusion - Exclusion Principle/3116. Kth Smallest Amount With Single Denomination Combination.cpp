#include<bits/stdc++.h>
using namespace std;
 
//  You are given an integer array coins representing coins of different denominations and an integer k.

// You have an infinite number of coins of each denomination. However, you are not allowed to combine coins of different denominations.

// Return the kth smallest amount that can be made using these coins.

 bool ispossible(long long int mid,long long int k,vector<int>& coins){

        // prepare bitmask;
        long long int cnt=0;
        int size=coins.size();
        for(int i=1;i<(1<<size);i++){
            int cntbit=0;
            long long int lcm=-1;
            for(int j=0;j<size;j++){
                if(i&(1<<j)){
                    cntbit++;

                    if(lcm==-1)
                    lcm=coins[j];
                    else
                    lcm=(lcm*coins[j])/__gcd(lcm,1ll*coins[j]);
                }

            }

           if(cntbit&1)
           cnt+=mid/lcm; 
           else
           cnt-=mid/lcm;
        }

        return cnt>=k;

    }

    long long findKthSmallest(vector<int>& coins, int k) {
        
        long long int ans=-1;

        long long int st=1;
        long long int end=1ll*(*max_element(coins.begin(),coins.end()))*k;

        while(st<=end){
        long long int mid=st+(end-st)/2;

        if(ispossible(mid,k,coins)){
            ans=mid;
            end=mid-1;
        }

        else
        st=mid+1;

        }

    return ans;
    }

int main()
{

int size;
cout<<"Enter the size of coin array\n";
cin>>size;

vector<int> coins(size);
cout<<"Enter the element of coin array\n";
for(int i=0;i<size;i++){
cin>>coins[i];
}

int k;
cout<<"Enter the value of k\n";
cin>>k;
cout<<"The kth smallest amount that can be made using these coins is: "<<findKthSmallest(coins,k)<<endl;
 
return 0;
}