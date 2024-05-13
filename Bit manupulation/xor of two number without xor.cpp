#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"XOR of two numbers is: "<<(a|b) -(a&b)<<"\n";
    cout<<"XOR of two numbers is: "<<((a|b)&(~a|~b))<<"\n";
    return 0;
}