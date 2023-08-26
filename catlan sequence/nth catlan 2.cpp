#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;
    unsigned long int catalanDP(unsigned int n)
{
    unsigned long int catalan[n + 1];
    catalan[0] = catalan[1] = 1;
    
    for (int i = 2; i <= n; i++) {
        catalan[i] = 0;
        for (int j = 0; j < i; j++){
        long long int temp=(catalan[j] %mod) * (catalan[i - j - 1]%mod);
        temp=temp%mod;
            catalan[i]+= temp;
            catalan[i]=catalan[i]%mod;
            
    }
}
 
   
    return catalan[n];
}

 
int main()
{

 int n;
cin>>n;
cout<<catalanDP(n);
 
 
    return 0;
}