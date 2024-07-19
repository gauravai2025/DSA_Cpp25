#include<bits/stdc++.h>
using namespace std;

void print_divisor(long long int num, unordered_map<long long int,long long int>&mp){
   
    for(long long int i=1;i*i<=num;i++){ // time complexity o(sqrt(n))
        if(num%i==0){
          mp[i]++;
            if(i!=num/i)
            mp[num/i]++;
        }
    }
}
 
 long long lcm(long long a, long long b)
{

    return (a / __gcd(a, b)) * b;
}

 
int main()
{
	long long int n;
	cin>>n;
	 unordered_map<long long int,long long int>mp;
	long long int x;

	 while(n--){
		cin>>x;
		print_divisor(x,mp);
	 }

int qe;
cin>>qe;
while(qe--){
  long long int p,q;
  cin>>p>>q;

  long long int ans=mp[p]+mp[q];

  long long int common_div=mp[lcm(p,q)];

  ans-=common_div;
  cout<<ans<<endl;
}
    return 0;
}