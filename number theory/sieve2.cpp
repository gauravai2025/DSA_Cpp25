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

  cout<<"enter two  numbers\n";
  long long int a,b;
  cin>>a>>b;
int cnt=0;
cout<<"all primes between "<<a<<"  and  "<<b<<" are: \n";
for(long long int k=min(a,b);k<=max(a,b);k++){
   if(primes[k]){
    cnt++;
    cout<<k<<" ";
   }
}
cout<<endl;
cout<<"number of primes: "<<cnt<<endl;

    return 0;
}