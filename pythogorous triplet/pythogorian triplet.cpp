#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the side of triangle\n";
    cin>>a>>b>>c;
    int k=max(a,max(b,c));
     if((k*k*2)==(a*a+b*b+c*c))
     cout<<"triple\n";
     else
     cout<<"no\n";
     return 0;
}