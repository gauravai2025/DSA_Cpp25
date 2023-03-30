#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 cout<<"enter size of vector\n";
    int size ;
    cin>>size ;
   vector<int>arr(size);
    cout<<"enter element of vector\n";
    for(int i=0;i<size ;i++){
        cin>>arr[i];
        }
cout<<"enter element to count its occurence\n";
int val;
cin>>val;
 int cnt=count(arr.begin(),arr.end(),val); // find number of occurence of element in whole vector
 cout<<val<<"  occurs: "<<cnt<<"  times\n";

  int cnt1=count(arr.begin()+1,arr.end(),val);// find number of occurence of element from second element to last element
 cout<<val<<"  occurs: "<<cnt1<<"  times\n";
 
 
 
    return 0;
}