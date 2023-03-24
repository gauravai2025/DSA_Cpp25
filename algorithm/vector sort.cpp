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
sort(a.begin()+2,a.end());  // sorting fom 3rd element to last element

for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
sort(a.begin(),a.end()-2); // sorting from 1st element to 3rd last element


for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
sort(a.begin(),a.end()); 

     // sorting whole vector
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}

    return 0;
}