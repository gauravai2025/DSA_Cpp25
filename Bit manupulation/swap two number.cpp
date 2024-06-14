#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int a,b;
cout<<"Enter the value of a and b: ";
cin>>a>>b;
a=a^b;
b=a^b;
a=a^b;
cout<<"After swapping a is: "<<a<<" and b is: "<<b<<"\n";
 
 
 
    return 0;
}