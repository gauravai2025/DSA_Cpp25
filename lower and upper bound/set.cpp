#include<bits/stdc++.h>
using namespace std;
 
int main()
{
cout<<"enter set size\n";
int size;
cin>>size;
cout<<"enter element of set\n"
;
set<int>s;
int x;
for (int i = 0; i < size; i++)
{
    cin>>x;
    s.insert(x);
 
}
cout<<"enter value to find lower and upper bound\n";
int val;
cin>>val;
// auto itlow=lower_bound(s.begin(),s.end(),val); // find lower bound in whole set
auto itlow=s.lower_bound(val); // o(logn)
auto itup=upper_bound(s.begin(),s.end(),val); // find upper bound in whole set  // o(n)
 
if(itlow==(s.end()))
cout<<"not found\n";
else
cout<<"lower bound of "<<val<<": "<<(*itlow)<<" position : "<<distance(s.begin(),itlow)<<endl;

if(itup==(s.end()))
cout<<"not found\n";
else
cout<<"upper  bound of "<<val<<" :"<<(*itup)<<endl;

    return 0;
}