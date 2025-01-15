#include<bits/stdc++.h>
using namespace std;

// A positive integer is magical if it is divisible by either a or b.

// Given the three integers n, a, and b, return the nth magical number. Since the answer may be very large, return it modulo 109 + 7.

    int const mod=1e9+7;
    bool ispossible(long long int n,long long int a,long long int b,long long int mid,long long int lcm){

        long long int c1=mid/a;
        long long int c2=mid/b;
        long long c3=mid/lcm;

        long long int ctotal=c1+c2-c3;

        return ctotal>=n;

    }

 long long  int nthMagicalNumber(int n, int a, int b) {

      long long int st=1,end=1ll*max(a,b)*n;
      long long int ans=0;
      long long lcm=(1ll*a*b)/__gcd(a,b);

      while(st<=end){
        long long int mid=st+(end-st)/2;

           if(ispossible(n,a,b,mid,lcm))
           {
            ans=mid;
            end=mid-1;
           } 

           else
           st=mid+1;
        }

        return ans%mod;
        
    }
 
int main()
{
    long long int n,a,b;
    cout<<"Enter the value of n,a,b\n";
    cin>>n>>a>>b;

    cout<<"The nth magical number is: "<<nthMagicalNumber(n,a,b)<<endl;
    return 0;
}