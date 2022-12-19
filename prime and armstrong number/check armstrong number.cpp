// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;


int main() {
    // Write C++ code here
    int n,d,s=0;
    cin>>n;
     int original_number=n;
    while(n>0){
        d=n%10;
       
        s+=pow(d,3);
        n=n/10;
       
    }
    if(s==original_number)
    cout<<"armstrong number";
    else
    cout<<"no";
    

    return 0;
}