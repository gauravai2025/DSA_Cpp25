#include<bits/stdc++.h>
using namespace std;

long long int subtract(long long int a,long long int b){
   int  sum=0;
   int  borrow=0;
   if(b==0)
   return a;
   
   while(b!=0){
         borrow=(~a)&b;
         sum=a^b;
         a=sum;
         b=borrow<<1;
   }
return sum;
}
 
 
int main()
{
cout<<"Enter two numbers\n";
 long long int a,b;
cin>>a>>b;
cout<<"difference is "<<subtract(a,b)<<"\n";
 
 
 
 
    return 0;
}