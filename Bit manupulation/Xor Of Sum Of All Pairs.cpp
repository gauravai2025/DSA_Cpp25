#include<bits/stdc++.h>
using namespace std;
long long int xor_sum(int*arr,int n){
    long long int ans=0;

    for(int i=0;i<n;i++){
        ans=ans^(2*arr[i]);
    }
    return ans;

    // for(int i=0;i<n;i++){
    //     ans=ans^(arr[i]);
    // }
    // return 2*ans;
}
 
int main()
{
cout<<"Enter the number of elements in the array"<<endl;
int n;
cin>>n;
int arr[n];
cout<<"Enter the elements of the array"<<endl;
for(int i=0;i<n;i++){
cin>>arr[i];

}
cout<<"The XOR of sum of all pairs is "<<endl;
cout<<xor_sum(arr,n)<<endl;
 
 
    return 0;
}