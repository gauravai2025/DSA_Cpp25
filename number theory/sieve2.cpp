#include<bits/stdc++.h>
using namespace std;
vector<int>ans;
void countprime(long long int n,long long int a){
vector<bool>prime(n,true);
int cnt=0;

prime[0]=prime[1]=false;

for(long long int i=2;i<=n;i++){
  for(long long int j=i*2;j<=n;j=j+i){
    prime[j]=false;
  }
}

for(long long int k=a;k<=n;k++){
   if(prime[k]){
    cnt++;
    ans.push_back(k);
   }
}
cout<<"number of primes: "<<cnt<<endl;
cout<<"all primes between "<<a<<"  and  "<<n<<" are: \n";
for(auto it:ans){
  cout<<it<<" ";
}
}
int main(){
  cout<<"enter two  numbers\n";
  long long int a,b;
  cin>>a>>b;
   countprime(max(a,b),min(a,b));
    return 0;
}