#include<bits/stdc++.h>
using namespace std;
 long long int square (long long int n){
    long long int ans=0;
    long long int chk=abs(n);
    n=abs(n);

    while(chk){
        if(chk&1)
        ans=ans+n;
        n=n<<1;
        chk=chk>>1;
    }
    return ans;
    // long long int ans=0;
    // if(num<0)
    // num=-num;
    // int n=num;
    // int i=0;

    // while(num){
    //     if(num&1)
    //     ans+=(n<<i);
    //     i++;
    //     num=num>>1;
    // }
    // return ans;
 }
int main()
{
cout<<"enter the number\n";
int n;
cin>>n;
cout<<"square of number is\n";
cout<<square(n);
 
    return 0;
}