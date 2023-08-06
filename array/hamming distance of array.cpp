#include<bits/stdc++.h>
using namespace std;

  long long  int totalHammingDistance(int *arr,int size) {
        int cnt;
         long  long int ans=0;
        for(int j=0;j<32;j++){
            cnt=0;
            for(int i=0;i<size;i++){
                if((arr[i]>>j)&1)
                cnt++;
            }
            ans=ans+(cnt)*(size-cnt);
            
        }
       
         
          return ans;
  }

 
int main()
{

cout<<"enter size of array: \n";
    int size;
    cin>>size;
  int arr[size];
  cout<<"enter element of array: \n";
  for(int i=0;i<size;i++){
      cin>>arr[i];
      
  }
 cout<<"total hamming distance: "<<totalHammingDistance(arr,size)<<"\n";
 
    return 0;
}