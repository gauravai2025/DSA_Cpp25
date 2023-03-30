#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  cout<<"enter size of array\n";
    int size ;
    cin>>size ;
  vector<int>arr(size);
    cout<<"enter element of vector \n";
    for(int i=0;i<size ;i++){
        cin>>arr[i];
        }
        
 int sum =accumulate(arr.begin(),arr.end(),0);// sum of whole vector
 cout<<"sum of vector: "<<sum<<endl;
 int sum1 =accumulate(arr.begin()+1,arr.end(),0);// sum of  vector from 2nd element to last element
 cout<<sum1<<endl;

 
 
    return 0;
}