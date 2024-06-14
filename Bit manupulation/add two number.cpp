#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int a,b;
cin>>a>>b;
cout<<"value of a+b: "<<(a|b)+(a&b)<<endl;
cout<<"value of a+b: "<<(a^b)+2*(a&b)<<endl;
    return 0;
}