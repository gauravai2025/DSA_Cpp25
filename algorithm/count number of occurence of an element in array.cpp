#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 cout<<"enter size of array\n";
    int size ;
    cin>>size ;
    int *arr=new int[size ];
    cout<<"enter element of array\n";
    for(int i=0;i<size ;i++){
        cin>>arr[i];
        }
cout<<"enter element to count its occurence\n";
int val;
cin>>val;
 int cnt=count(arr,arr+size,val); // find number of occurence of element in whole array
 cout<<val<<"  occurs: "<<cnt<<"  times\n";

  int cnt1=count(arr+1,arr+size,val);// find number of occurence of element from second element to last element
 cout<<val<<"  occurs: "<<cnt1<<"  times\n";
 
 
 
    return 0;
}