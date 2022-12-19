#include<iostream>
using namespace std;
int factorial(int num){
    int fact=1;
    for(int i=2;i<=num;i++){
        fact*=i;}
        return fact;

    }

int main(){
int n,r;
cout<<"enter total number";
cin>>n;
cout<<"enter selection number";
cin>>r;
int k1=factorial(n);
int k2=factorial(r);
int k3=factorial(n-r);
cout<<((k1)/(k2*k3));
return 0;

}