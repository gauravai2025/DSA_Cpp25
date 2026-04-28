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

    int q;
    cout<<"enter number of queries: ";
    cin>>q;

    while(q--){
      int l,r;
      cout<<"enter range to count number of prime: ";
      cin>>l>>r; 
      int cnt=0;
      for(int i=l;i<=r;i++){
        if(primes[i])
        cnt++;
      }

    cout<<"number of prime between "<<l<<" "<<r<<": "<<cnt<<endl;
    }
 
    return 0;
}