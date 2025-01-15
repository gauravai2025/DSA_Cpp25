#include<bits/stdc++.h>
using namespace std;

long long int max_sum_subarray(vector<int>&arr,int size){
   long long int maxsum=LONG_MIN;
    long long int sum=0;
    
for(int i=0;i<size;i++){
    sum+=arr[i];
     maxsum=max(maxsum,sum);
    if(sum<0)
    sum=0;

}
return maxsum;


}

 
int main()
{

cout<<"enter number of element in vector\n";
int size;
cin>>size;
vector<int>arr(size);
 
cout<<"enter  element of vector\n";
for(int i=0;i<size;i++){
    cin>>arr[i];
}
cout<<"maximum sum subarray: "<<max_sum_subarray(arr,size);
 
    return 0;
}