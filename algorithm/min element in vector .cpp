#include<bits/stdc++.h>
using namespace std;
 
int main()
{

 cout<<"enter number of element in vector\n";
int n;
cin>>n;
    vector<int>a(n);
 

cout<<"enter  element of vector\n";
for(int i=0;i<n;i++){
    cin>>a[i];
}

auto it=min_element(a.begin(),a.end());  // find max element fom whole vector and return its iterator
cout<<(*it)<<endl;
 
auto it1=min_element(a.begin()+2,a.end());  // find max element fom 3rd element to last element and return its iterator
 
 cout<<(*it1)<<endl;
 int val=*min_element(a.begin(),a.end()); 
 cout<<val<<endl;
 
 cout<<"minimum element at position: "<<min_element(a.begin(),a.end())-a.begin();
 
    return 0;
}