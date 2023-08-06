#include<bits/stdc++.h>
using namespace std;

long long int add(long long int a,long long int b){
   int  sum=0;
   int  carry=0;
   // base case
   if(b==0)
    return a;
    
   while(b!=0){
         carry=a&b;
         sum=a^b;
         a=sum;
         b=carry<<1;
   }
return sum;
}
 

int main()
{
cout<<"Enter two numbers\n";
 long long int a,b;
cin>>a>>b;
cout<<"Sum is "<<add(a,b)<<"\n";
 
 
 
 
    return 0;
}