#include<bits/stdc++.h>
using namespace std;
void sum_subarray(int arr[],int size)
{
    long long int ans=0;
    long long int cnt=0;
    for(int i=0;i<size;i++)
    {
    cnt=((size-i)*(i+1))/2;
     ans+=arr[i]*cnt; 
    }

    cout<<"Sum of all subarray is "<<ans<<endl;
}
 
 
int main()
{
int size;
cout<<"Enter the size of array"<<endl;
cin>>size;
int arr[size];
cout<<"Enter the elements of array"<<endl;
for(int i=0;i<size;i++)
{
    cin>>arr[i];
}
cout<<endl;
 sum_subarray(arr,size);
    return 0;
}