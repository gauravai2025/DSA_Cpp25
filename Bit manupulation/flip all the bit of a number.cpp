#include<bits/stdc++.h>
using namespace std;
void unsigned_flip(int num){
    unsigned int ans=0;
      for(int i=31;i>=0;i--){
        if(!(num>>i)&1){
            ans=ans^(1<<i);
        }
    }
    cout<<ans<<endl;
}
void printbinary(int num){
    for(int i=31;i>=0;i--){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
 
int main()
{
cout<<"enter number\n";
    int num;
    cin>>num;
    int flip_num=num;
    cout<<"binary of "<<num<<" is\n";
    printbinary(num);
    cout<<endl;
     num=(~num); // flip all the bit of a number tilde operator 1's complement
     printbinary(num);
     cout<<"decimal value after flip all the bit of a number is\n";
     cout<<num<<endl; // -ve of a number is 1+2's complement of a number
          cout<<"decimal value  in unsigned integer after flip all the bit of a number is\n";

     unsigned_flip(flip_num);
      
 
 
 
    return 0;
}