#include<bits/stdc++.h>
using namespace std;

long long int max_product_subarray(int *arr, int size){
    long long  int ans=LONG_MIN;
       long long  int pre=1;
    long long    int suff=1;
        for(int i=0;i<size;i++){
            pre=pre*arr[i];
            ans= max(ans,pre);
            if(pre==0)
            pre=1;
          suff=suff*arr[size-1-i];
            ans= max(ans,suff);
            if(suff==0)
            suff=1;

        }
        return ans;
        

}
 
int main()
{
    cout<<"enter size of array: \n";
    int n;
    cin>>n;
  int arr[n];
  cout<<"enter element of array: \n";
  for(int i=0;i<n;i++){
      cin>>arr[i];
      
  }
 cout<<"maximum product of subarray: "<< max_product_subarray(arr,n);

    return 0;
}