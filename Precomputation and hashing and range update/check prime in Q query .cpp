#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAX 10000000
bool *primes = new bool[MAX+1];

int main(){

  for(ll i =0; i<MAX+1; i++) {
    primes[i] = true;
  }

  ll sqr = sqrt(MAX);
  primes[0] = false;
  primes[1] = false;
  for(ll p=2; p<=sqr; p++){
    if(primes[p]) {
      for(ll i = p*p; i<=MAX; i+=p) {
        primes[i] = false;      // time complexity   O(nlog(log(n)))  ~ 2*O(n)
      }
    }
  }

  int q;
  cout<<"enter number of query:\n";
  cin>>q;
  cout<<"enter number: \n";

  while(q--){
   int num;
    cin>>num;
   if(primes[num])
   cout<<"prime\n";
   else
   cout<<"not prime\n";

  }

    return 0;
}