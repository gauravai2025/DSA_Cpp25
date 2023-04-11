#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<INT_MAX;
    int a=(1<<32)-1;// overflow  integer calculation
     int num=(1ll<<32)-1;// overflow  long long int calculation but variable integer
    int b=(1<<31)-1;// overflow integer calculation
     int b=(1ll<<31)-1; //no overflow calculation long long int  
     unsigned int val=(1ll<<32)-1;
     cout<<val;
    return 0;
}