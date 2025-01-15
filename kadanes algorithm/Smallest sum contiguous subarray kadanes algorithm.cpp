#include<bits/stdc++.h>
using namespace std;

int smallestSumSubarray(vector<int>& a){
   
    long long  int sum=0;
    long long int mnsum=INT_MAX;
    int st=0;
    int stans=-1;
    int end=0;
      
    for(int i=0;i<a.size();i++){
        
     sum+=a[i];

    if(sum<mnsum){
    mnsum=sum;
    stans=st;
    end=i;
    }
            
    if(sum>0){
    sum=0;
    st=i+1;
    }
    
    }

    cout<<"Subarray is: \n";
    cout<<stans<<" "<<end<<endl;
    
    for(int i=stans;i<=end;i++){
        cout<<a[i]<<" ";
    }
      
    return mnsum;
  }
 
int main()
{

    int size;
    cout<<"Enter the size of array\n";
    cin>>size;

    vector<int>arr(size);
    cout<<"Enter the element of array\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Smallest sum contiguous subarray: "<<smallestSumSubarray(arr);

    return 0;
}