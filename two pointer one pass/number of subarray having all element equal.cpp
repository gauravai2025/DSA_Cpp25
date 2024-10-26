#include<bits/stdc++.h>
using namespace std;

void equalsubarray(vector<int>&arr){
    
int n=arr.size();

ll cnt=1;
ll ans=0;
  
  for(int i=1;i<n;i++){
      
    if(arr[i]==arr[i-1])
    cnt++;
    
    else{
    ans+=cnt*(cnt+1)/2;
    cnt=1;
    }
  }
  
ans+=cnt*(cnt+1)/2;

cout<<ans<<endl;
    
}
 
int main()
{
int size;
cout<<"Enter the size of the array\n";
cin>>size;
vector<int>arr(size);
cout<<"Enter the elements of the array\n";

for(int i=0;i<size;i++)
{
    cin>>arr[i];
}
 
equalsubarray(arr);
    return 0;
}