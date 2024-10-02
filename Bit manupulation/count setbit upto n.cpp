#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll count_bit( ll num){

    if(num==0){
        return 0;
    }

       ll x=log2(num);

       ll countbituptopower2=(1ll<<(x-1))*x;

       ll msbfrompower2=num-(1<<x)+1;
       ll rest=num-(1<<x);

     return countbituptopower2 + msbfrompower2+count_bit(rest);
}

 
int main()
{
cout<<"enter number\n";
ll n;
cin>>n;
ll ans=count_bit(n);
cout<<"number of set bits upto n are: "<<ans<<endl;
 
    return 0;
}