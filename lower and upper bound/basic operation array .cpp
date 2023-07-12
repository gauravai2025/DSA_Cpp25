#include<bits/stdc++.h>
using namespace std;
 
int main()
{
cout<<"enter array size\n";
int size;
cin>>size;
cout<<"enter element of array\n"
;
int a[size];
for (int i = 0; i < size; i++)
{
    cin>>a[i];
}
sort(a,a+size);
cout<<"enter element to find lower and upper bound \n";
int val;
cin>>val;
int *ptlow=lower_bound(a,a+size,val); // return pointer of equal or next  greater value element
int *ptup=upper_bound(a,a+size,val);//return pointer of next greater value element
if(ptlow==(a+size))
cout<<"not found\n";
else
cout<<"lower bound of "<<val<<": "<<(*ptlow)<<endl;

if(ptup==(a+size))
cout<<"not found\n";
else
cout<<"upper  bound of "<<val<<" :"<<(*ptup)<<endl;
int *ptlow1=lower_bound(a+2,a+size,val); // check from 3rd element to last element in sorted order
if(ptlow1==(a+size))
cout<<"not found\n";
else
cout<<"lower bound of "<<val<<": "<<(*ptlow1)<<endl;
    return 0;
}