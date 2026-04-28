#include<bits/stdc++.h>
using namespace std;
 
int main()
{
long long int num,deno;
cout<<"enter numerator denominator: \n";
cin>>num>>deno;

long long int gcdval=__gcd(num,deno);

num/=gcdval;
deno/=gcdval;

cout<<"fraction: ";
cout<<num<<"/"<<deno<<endl;
    return 0;
}