#include<bits/stdc++.h>
using namespace std;

void sum_subarray(int arr[],int size)
{
    long long int sum=0;
    long long int ans=0;
    for(int i=0;i<size;i++)
    {
     ans+=arr[i]*(size-i)*(i+1); 
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