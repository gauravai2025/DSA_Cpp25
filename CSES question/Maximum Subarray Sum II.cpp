#include<bits/stdc++.h>
using namespace std;

long long int max_sum_subarray(vector<int>&arr,int size,int a,int b){
    long long int maxsum=LONG_MIN;
    long long int sum=0; 
    int sub_len=0;
    
for(int i=0;i<size;i++){
    sum+=arr[i];
    sub_len++;

    if(sub_len>=a && sub_len<=b)
     maxsum=max(maxsum,sum);

    if(sum<0 || sub_len>b){
    sum=0;
    sub_len=0;
    }
   

}
return maxsum;


}

 
int main()
{

int size;
cin>>size;
int a,b;
cin>>a>>b;
vector<int>arr(size);
 
for(int i=0;i<size;i++){
    cin>>arr[i];
}
cout<<max_sum_subarray(arr,size,a,b);
 
    return 0;
}