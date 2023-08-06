#include<bits/stdc++.h>
using namespace std;

long long int add(long long int a,long long int b){
    int carry=0;
    long long int ans=0;
    int pos=0;
    while(a!=0 || b!=0){
        int last_bit_a=a&1;
        int last_bit_b=b&1;
        int one=0;
        if(last_bit_a==1)
        one++;
        if(last_bit_b==1)
        one++;
        if(carry==1)
        one++;
       carry=one>>1;
        if(one &1)
    ans^=(1<<pos);

    // carry=(last_bit_a & last_bit_b) & carry;
    a=a>>1;
    b=b>>1;
pos++;
    
    }   

    if(carry){
        ans^=(1<<pos);
    }
    return ans;
}
 

int main()
{
cout<<"Enter two numbers\n";
 long long int a,b;
cin>>a>>b;
cout<<"Sum is "<<add(a,b)<<"\n";
 
 
 
    return 0;
}