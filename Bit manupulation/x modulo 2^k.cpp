#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int num;
cout<<"Enter the number: ";
cin>>num;
int k;
cout<<"Enter the value of k: ";
cin>>k;
cout<<"The value of "<<num<<" modulo 2^"<<k<<" is: "<<(num&(1<<k)-1)<<"\n";
return 0;
}