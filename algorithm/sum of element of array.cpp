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
 int sum =accumulate(arr,arr+size,0);// sum of whole array
 cout<<"sum of array :"<<sum<<endl;
 int sum1 =accumulate(arr+1,arr+size,0);// sum of  array from 2nd element to last element
 cout<<sum1<<endl;

 
 
    return 0;
}