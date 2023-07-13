#include<bits/stdc++.h>
using namespace std;
 int absoulute(int a)
 {
     if(a<0)
     return -a;
     else
     return a;
 }

int main()
{
cout<<"enter number\n";
int a;
cin>>a;
cout<<"absolute value of "<<a<<" is "<<absoulute(a)<<endl;
 
 
 
    return 0;
}