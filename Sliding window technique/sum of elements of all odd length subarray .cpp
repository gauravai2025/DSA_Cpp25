#include<bits/stdc++.h>
using namespace std;

void sum_subarray(int arr[],int size)
{
    long long int sum=0;
    long long int ans=0;
    int cnt=0;

    for(int i=0;i<size;i++)
    {
        sum=0;
        cnt=0;
        for(int j=i;j<size;j++)
        {
            sum+=arr[j];
            cnt++;
            if(cnt&1)
            ans+=sum;
        }
    }

    cout<<"Sum of all odd length subarray is "<<ans<<endl;
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