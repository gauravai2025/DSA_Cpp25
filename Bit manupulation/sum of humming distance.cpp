// Sum of Hamming Distances Between Consecutive Integers

// Given an integer n, consider the array [0, 1, 2, ..., n]. Return the sum of the Hamming distances between every pair of adjacent numbers:

// i=0
// ∑HammingDistance(i,i+1)
// n-1

// where the Hamming distance is the number of bit positions at which two numbers differ.

#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
long long int n;
cin>>n;

long long int cnt=0;

int bitlen=log2(n)+1;
n++;

for(int i=0;i<=bitlen;i++){
long long int blk=(1ll<<i);

cnt+=((n+blk-1)/blk)-1;
}

cout<<cnt<<endl;
}
 
return 0;
}