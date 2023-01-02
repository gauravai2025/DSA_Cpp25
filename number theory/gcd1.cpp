
#include<bits/stdc++.h>
using namespace std;
long long int gcd1(int a,int b){
    if(b==0)
    return a;
    else
   return  gcd1(b,a%b);
} 
long long int lcm(int a,int b){
    return (a*b)/gcd1(a,b);

}
int main() {
 long long   int a,b;
 cout<<"enter two mumber\n";
 cin>>a>>b;
 cout<<"gcd :"<<gcd1(max(a,b),min(a,b))<<endl;
 cout<<"lcm :"<<lcm(max(a,b),min(a,b));
 return 0;
}
