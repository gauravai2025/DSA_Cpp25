#include<bits/stdc++.h>
using namespace std;

int  cnt_move(int n)
{
   if(n==0)
   return 0;

   return 2*cnt_move(n-1)+1;
}
 
int main()
{
int n;
cin>>n;
cout<<cnt_move(n);
 

    return 0;
}