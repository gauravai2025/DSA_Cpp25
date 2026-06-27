#include<bits/stdc++.h>
using namespace std;
 
int main()
{
long long int a,b;
cout<<"Enter range to generate random number: ";
cin>>a>>b;
srand(time(0)); // seeding randomized function on every compilation generate different sequence of random number
long long int randomnum=rand()%(b-a+1)+a;
cout<<randomnum;
return 0;
}