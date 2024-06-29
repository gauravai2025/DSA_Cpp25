#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

long long int binary_exponentiation(long long int a,long long int b)
{
    long long int res=1;
    while(b>0)
    {
        if(b%2==1)
        {
            res=(res*a)%mod;
        }

        a=(a*a)%mod;

        b=b/2;
    }
    return res;
}
 
int main()
{

long long int a,b;
cin>>a>>b;
cout<<binary_exponentiation(a,b);
    return 0;
}