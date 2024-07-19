#include<bits/stdc++.h>
using namespace std;

int tugOfWar(vector<int> &arr, int n)
{
   int cnt=0;
   int sum=0;
   int sum_total=0;
   int ans=INT_MAX;

   for (int j = 0; j < n; j++) {
     sum_total += arr[j];
   }

   for(int i=1;i<(1<<n);i++){
       cnt=0; sum=0;
       for(int j=0;j<n;j++){
           if(i&(1<<j)){
            cnt++;
        sum+=arr[j];
           }

       }

      int rem=n-cnt;

      if(abs(rem-cnt)<=1)
      ans=min(ans,abs(sum_total-2*sum)); 
   }

   return ans;
}

 
int main()
{

int n;
cout<<"number of players\n";
cin>>n;

vector<int> arr(n);
cout<<"Enter the strength of players\n";
 
 for(int i=0;i<n;i++){
     cin>>arr[i];
    }

cout<<tugOfWar(arr,n);

 
    return 0;
}