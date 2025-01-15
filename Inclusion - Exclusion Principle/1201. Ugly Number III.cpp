#include<bits/stdc++.h>
using namespace std;

int const mod=1e9+7;

    bool ispossible(long long int n,long long int a,long long int b,long long int c,long long int mid,long long int lcm1,long long int lcm2,long long int lcm3,long long int lcm4){

        long long int c1=mid/a;
        long long int c2=mid/b;
        long long int c3=mid/c;
       long long int c4=mid/lcm1;
       long long int c5=mid/lcm2;
       long long int c6=mid/lcm3;
      long long int c7=mid/lcm4;

    long long int ctotal=c1+c2+c3-c4-c5-c6+c7;
    return ctotal>=n;
    }

long long int nthUglyNumber(int n, long long int a, long long int b,long long  int c) {

      long long int st=1,end=1ll*max({a,b,c})*n;
      long long int ans=0;
      long long lcm1=(1ll*a*b)/__gcd(a,b);
      long long lcm2=(1ll*a*c)/__gcd(a,c);
      long long lcm3=(1ll*c*b)/__gcd(c,b);
     long long lcm4=(1LL*lcm1*c)/__gcd(lcm1,c);


      while(st<=end){
        long long int mid=st+(end-st)/2;

           if(ispossible(n,a,b,c,mid,lcm1,lcm2,lcm3,lcm4))
           {
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

long long int n,a,b,c;
cout<<"Enter the value of n,a,b,c\n";
cin>>n>>a>>b>>c;

cout<<"The nth ugly number is: "<<nthUglyNumber(n,a,b,c)<<endl;
 
 
 
    return 0;
}