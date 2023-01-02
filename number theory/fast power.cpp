#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    double myPow(double x, int n){
         double rslt=1;
        double chk=x;
        int n1=abs(n);
         int n2=abs(n);
            if( n==0)
            return rslt;
            else{
       
        while(n1>0){
            if(n<0)
            x=1/x;
        if(n1&1)
        rslt=rslt*x;
        x=x*x;
        n1=n1>>2;

        }
         if( n2%2==0)
        return rslt;
        else if( n2%2!=0 )
        return (-1*rslt);
            }

        
    }
    int main(){
        double x;
        int n;
        cin>>x>>n;
       cout<< myPow(x,n);
        return 0 ;
    }
