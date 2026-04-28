#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int num;
    cout<<"enter of number of element: ";
    cin>>num;
    
    int arr[num];

    for(int i=0;i<num;i++){
    cin>>arr[i];
    }

    long long int sumtl=0;

    for(int i=0;i<num;i++){
        long long int sum=0;
        for(int j=i;j<num;j++){
         sum^=arr[j];
         sumtl+=sum;
        }
    }

    cout<<sumtl<<endl;

    return 0;
}