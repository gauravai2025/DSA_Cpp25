#include<bits/stdc++.h>
using namespace std;
// zero is not power of 2;
 bool power2(int n)
 {    
     return n&&!(n&(n-1));
 }

int main()
{
cout<<"enter number\n";
int a;
cin>>a;
cout<<"number  "<<a<<" is power of 2: "<<power2(a)<<endl;
 
 
 
    return 0;
}