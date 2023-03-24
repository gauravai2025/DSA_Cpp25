#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    cout<<"enter number of element in array\n";
int n;
cin>>n;
int *a=new int [n]; // dynamically array
cout<<"enter  element of array\n";
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n); // sorting whole array

for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}

sort(a,a+3); // sorting from 1st element to 3rd element


for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}

sort(a+2,a+n); // sorting fom 3rd element to last element


for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}

    return 0;
}
