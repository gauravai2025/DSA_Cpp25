#include<bits/stdc++.h>
using namespace std;

int main()
{

vector<int>primes(1e6+1,1);

primes[0]=0;
primes[1]=0;

for(int i=2;i*i<=1e6;i++){
    if(primes[i]){
        for(int j=i*i;j<=1e6;j+=i){
            primes[j]=0;
        }
    }
}

// prepare prefix array for count of prime

for(int i=3;i<=1e6;i++){
    primes[i]+=primes[i-1];
}

    int q;
    cout<<"enter number of queries: ";
    cin>>q;

    while(q--){
      int l,r;
      cout<<"enter range to count number of prime: ";
      cin>>l>>r; 
      int cnt=primes[r]-primes[l-1];
     
    cout<<"number of prime between "<<l<<" "<<r<<": "<<cnt<<endl;
    }
 
    return 0;
}