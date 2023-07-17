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
cout<<"position of lower bound of "<<val<<": "<<(ptlow-a)<<endl;
cout<<"position of upper bound of "<<val<<": "<<(ptup-a)<<endl;
vector<int> v(a,a+size);  // copy array to vector
vector<int>::iterator itlow=lower_bound(v.begin(),v.end(),val); // return iterator of equal or next  greater value element
if(itlow==v.end())
cout<<"not found\n";
else
cout<<"lower bound of "<<val<<": "<<(*itlow)<<endl;

vector<int>::iterator itup=upper_bound(v.begin(),v.end(),val);//return iterator of next greater value element
if(itup==v.end())
cout<<"not found\n";
else
cout<<"upper  bound of "<<val<<" :"<<(*itup)<<endl;
vector<int>::iterator itlow1=lower_bound(v.begin()+2,v.end(),val); // check from 3rd element to last element in sorted order
if(itlow1==v.end())
cout<<"not found\n";
else
cout<<"lower bound of "<<val<<": "<<(*itlow1)<<endl;
cout<<"position of lower bound of "<<val<<": "<<(itlow-v.begin())<<endl;
    return 0;
}
