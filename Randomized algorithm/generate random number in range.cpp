#include<bits/stdc++.h>
using namespace std;
 
int main()
{

long long int a,b;
cout<<"Enter range to generate random number: ";
cin>>a>>b;
long long int randomnum=rand()%(b-a)+a;
cout<<randomnum;
return 0;
}