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
cout<<"enter element to find \n";
int val;
cin>>val;
 int *cnt=find(arr,arr+size,val); // find number and return its address  in whole array
if(cnt==arr+size)
cout<<"not present\n";
else
cout<<" present: "<<(*cnt)<<endl;

  int *cnt1=find(arr+1,arr+size,val);// find number and return its pointer  from second element to last element
if(cnt1==arr+size)
cout<<"not present\n";
else
cout<<" present: "<<(*cnt1)<<endl;
 cout<<cnt1-arr<<endl;
 
 
    return 0;
}