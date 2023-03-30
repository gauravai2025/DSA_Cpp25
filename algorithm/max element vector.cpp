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

auto it=max_element(a.begin(),a.end());  // find max element fom whole vector and return its iterator
cout<<(*it)<<endl;
 
auto it1=max_element(a.begin()+2,a.end());  // find max element fom 3rd element to last element and return its iterator
 
 cout<<(*it1)<<endl;
 int val=*max_element(a.begin(),a.end()); 
 
    return 0;
}