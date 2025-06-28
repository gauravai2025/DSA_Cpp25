#include<bits/stdc++.h>
using namespace std;

long long int max_sum_subarray(vector<int>&arr,int size){
    int st=0,end=0;
   long long int maxsum=LONG_MIN;
    long long int sum=0;
    int stans=-1;

for(int i=0;i<size;i++){
    sum+=arr[i];
    if(maxsum<sum){
        maxsum=sum;
        end=i;
        stans=st;
    }

    if(sum<0){
    sum=0;
    st=i+1;
    // end=i+1;
    }

}

cout<<"subarray range\n";
cout<<st<<" "<<end<<endl;

for(int i=stans;i<=end;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
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