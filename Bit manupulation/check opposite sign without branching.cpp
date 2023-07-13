#include<bits/stdc++.h>
using namespace std;
// zero is considered as positive number
 bool opposite(int  a,int b)
 {
     return ((a^b)<0); // xor of two numbers is negative if they have opposite sign
 }
int main()
{
    cout<<"enter two numbers"<<endl;
int a,b;
cin>>a>>b;
//cout<<((a^b)<0?"opposite sign":"same sign")<<endl;
if(opposite(a,b)) 
    cout<<"opposite sign"<<endl;
else
    cout<<"same sign"<<endl;
 
 
 
    return 0;
}