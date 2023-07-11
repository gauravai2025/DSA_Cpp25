#include<bits/stdc++.h>

using namespace std;

bool isprime[100000005];  // all valus false
vector <int> prime;

int main()
{
    //sieve();
    for(int i=3;i<=10000;i+=2)
    {
        if(isprime[i]==0)
        {
            for(int j=i*i;j<=100000000;j+=i+i)
        {

            isprime[j]=1;

        }
        }

    }
    prime.push_back(2);
    for(int i=3;i<=100000000;i+=2)
        if(isprime[i]==0)
        prime.push_back(i);
    //primeload();
    int t,n;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        printf("%d\n",prime[n-1]);
    }
}