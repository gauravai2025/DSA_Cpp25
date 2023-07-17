// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;

int main() {
    // Write C++ code here
    int n; 
    cin>>n;
    int number=0;
    int i=0;
    // while(n>0){
    //    int last_digit=n%10;
    //    number=number+last_digit*pow(2,i);
    //     i=i+1;
    //     n=n/10;
    // }
    while(n){
        if(n&1)
        number+=(1<<i);
        i++;
        n=n>>1;
    }
    cout<<number;
    return 0;
}