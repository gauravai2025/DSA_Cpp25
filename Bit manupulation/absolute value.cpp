#include<bits/stdc++.h>
using namespace std;

int absolute(int a)
{
    int mask=a>>31; // if a is negative then mask=-1 else mask=0
    return (a+mask)^mask;
//   int mask=~(1<<31);
//     a=(a)&(mask);
//     return a;
}
 
int main()
{
    cout<<"Enter  numbers:\n";
    int a;
    cin>>a;
cout<<"Absolute value is:"<<absolute(a)<<endl;
 cout<<maxb;
 
 
    return 0;
}