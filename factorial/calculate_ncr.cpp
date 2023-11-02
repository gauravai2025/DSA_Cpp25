#include<iostream>
using namespace std;

long long int factorial(int num){
   long long  int fact=1;
    for(int i=2;i<=num;i++){
        fact*=i;
        }
        return fact;

    }

    long long int ncr(int n,int r){
       long long  int k1=factorial(n);
      long long    int k2=factorial(r);
        long long  int k3=factorial(n-r);
        return ((k1)/(k2*k3));
    }

int main(){
int n,r;
cout<<"enter total number";
cin>>n;
cout<<"enter selection number";
cin>>r;
cout<<ncr(n,r);
// int k1=factorial(n);
// int k2=factorial(r);
// int k3=factorial(n-r);
// cout<<((k1)/(k2*k3));

}