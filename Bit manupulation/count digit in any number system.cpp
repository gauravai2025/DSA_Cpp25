#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    cout<<"enter number of base digit in number system \n";
    int b;
    cin>>b;
 cout<<"enter number\n";
    int num;
    cin>>num;
  cout<<"number of digits in "<<num<<" in base "<<b<<" is: "<<floor(log(num)/log(b))+1<<"\n";
 // examples number of bits in inary of number
    cout<<"number of digits in "<<num<<" in base "<<2<<" is: "<<floor(log(num)/log(2))+1<<"\n";

   // cout<<floor(log2(num))+1;
 
 
    return 0;
}