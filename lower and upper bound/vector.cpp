#include<bits/stdc++.h>
using namespace std;
 
int main()
{
cout<<"enter array size\n";
int size;
cin>>size;
cout<<"enter element of array\n"
;
vector<int>a(size);
for (int i = 0; i < size; i++)
{
    cin>>a[i];
}
sort(a.begin(),a.end());
cout<<"enter element to find lower and upper bound \n";
int val;
cin>>val;
auto ptlow=lower_bound(a.begin(),a.end(),val); // return pointer of equal or next  greater value element
auto ptup=upper_bound(a.begin(),a.end(),val);//return pointer of next greater value element
if(ptlow==(a.end()))
cout<<"not found\n";
else
cout<<"lower bound of "<<val<<": "<<(*ptlow)<<endl;

if(ptup==(a.end()))
cout<<"not found\n";
else
cout<<"upper  bound of "<<val<<" :"<<(*ptup)<<endl;

auto ptlow1=lower_bound(a.begin()+2,a.end(),val); // check from 3rd element to last element in sorted order
if(ptlow1==(a.end()))
cout<<"not found\n";
else
cout<<"lower bound of "<<val<<": "<<(*ptlow1)<<endl;
    return 0;
}