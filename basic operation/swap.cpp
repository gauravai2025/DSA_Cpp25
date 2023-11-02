#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int a,b;
cout<<"enter two number\n";
cin>>a>>b;
cout<<"before swap a: "<<a<<" b: "<<b<<endl;

int temp=a;
a=b;
b=temp;
cout<<"after swap a: "<<a<<" b: "<<b<<endl;
    return 0;
}