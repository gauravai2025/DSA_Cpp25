#include<bits/stdc++.h>
using namespace std;
 
int main()
{
cout<<"enter number\n";
int num;
cin>>num;
 cout<<"total set bit :"<<__builtin_popcount(num);

long long int val=(1ll<<35)-1;
cout<<"total set bit :"<<__builtin_popcountll(val); // calculate number of setbit for long long integer also
 // check for  long long int val=(1ll<<35-1)
 
 
    return 0;
}