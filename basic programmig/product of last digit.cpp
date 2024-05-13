#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int a,b,c,d;
cin>>a>>b>>c>>d;
int last2a=0;
int last2b=0;
int last2c=0;
int last2d=0;
last2a=a%100;
last2b=b%100;
last2c=c%100;
last2d=d%100;
int ans=(last2a*last2b*last2c*last2d)%100;
if(ans>=10)
{
    cout<<ans;
}
else
{
    cout<<0<<ans;
}
    return 0;
}