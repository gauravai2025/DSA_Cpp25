#include<bits/stdc++.h>
using namespace std;
 bool opposite(long long int  a,long long int b)
 {
     return ((a*b)<0); // product of two numbers is negative if they have opposite sign
 }
int main()
{
int a,b;
cout<<"enter two numbers"<<endl;
cin>>a>>b;
//cout<<((a*b)<0?"opposite sign":"same sign")<<endl;
cout<<"is opposite sign: "<<opposite(a,b)<<endl;
 
 
 
    return 0;
}