#include<bits/stdc++.h>
using namespace std;
 
int main()
{

map<int,int>s={{1,4},{5,7},{9,1},{0,3}};


auto itlow=s.lower_bound(1); // find lower bound in whole map of key
auto itup=s.upper_bound(1); // find upper bound in whole map of key
 
if(itlow==(s.end()))
cout<<"not found\n";
else
cout<<"lower bound of "<<1<<": "<<(itlow)->first<<endl;

if(itup==(s.end()))
cout<<"not found\n";
else
cout<<"upper  bound of "<<1<<" :"<<(itup)->first<<endl;

    return 0;
}