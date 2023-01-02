
#include<bits/stdc++.h>
using namespace std;
 long long int x;
    long long int y;
void exteuclid(long long int a,long long int b){
    if(b==0){
        x=1;
        y=0;
        return ;
        
    }
    
       exteuclid(b,a%b);
      long long int xnew=y;
       long long int ynew=x-a/b*y;
        x=xnew;
        y=ynew;
}
int invmodulo(long long int a,long long int m){
    if(__gcd(a,m)==1){
       exteuclid(a,m);
       return (x+m)%m;
    }
    else
    return-1;
    
}
int main() {
    long long int a;
    long long int m;
    cout<<"enter  number a\n";
    cin>>a;
    cout<<"enter  number m\n";
       cin>>m;
 cout<<"modular inverse of " <<a<<"is :"<<invmodulo(a,m);
      
  
    return 0;
}