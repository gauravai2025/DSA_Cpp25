// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;
bool isprime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){

            return false;
        }
       
    
    }
     return true;
}
int main() {
    // Write C++ code here
    int a,b;
   cout<<"enter two number";
   cin>>a>>b;
   for(int i=a;i<=b;i++){
      if(isprime(i)==true){
      cout<<i<<endl;}
   }
    return 0;
}