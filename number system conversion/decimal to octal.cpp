#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,octal=0;
    cout<<"enter number\n";
    cin>>n;
    while(n!=0){
        int i=0;
     int   last_digit=n%8;
     octal+=last_digit*pow(10,d-i);
     i++;
     n=n/10;
    }
    cout<<octal;
    return 0;
}