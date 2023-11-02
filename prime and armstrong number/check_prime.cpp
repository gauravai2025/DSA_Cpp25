#include<iostream>
using namespace std;
// 0 -> Not a Prime no.
// 1 -> not a Prime no.

bool isPrime(int n ) {
    if(n<=1)
    return 0;
   for(int i = 2; i < n; i++){
       if(n % i == 0) {
       //divide hogya h , not a prime no.
          return 0;
        }
   }
   return 1;
}

int main() {
   
   int n ;
   cout<<"Enter a number : "<<endl;
   cin >> n;
   if(isPrime(n)) {
        cout <<" is a Prime number " <<endl;
   }
   else{
       cout<< "Not a prime number "<<endl;

   }
}