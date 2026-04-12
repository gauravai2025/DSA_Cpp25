#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
   
    if(n<=1)
    return 0;

    for(int i=2;i*i<=n;i++){
        if(n%i==0)
        return 0;
    }

    return 1;
}
 
int main()
{

    int q;
    cout<<"enter number of queries: ";
    cin>>q;

    while(q--){
      int l,r;
      cout<<"enter range to count number of prime: ";
      cin>>l>>r; 
      int cnt=0;
      for(int i=l;i<=r;i++){
        if(isprime(i))
        cnt++;
      }

    cout<<"number of prime between "<<l<<" "<<r<<": "<<cnt<<endl;
    }
 
    return 0;
}