#include<bits/stdc++.h>
using namespace std;

 void  binomialcofficient(int n,int r){
     
    long long int res=1;
    
    for(int i=0;i<r;i++){
        res*=(n-i);
        res/=(i+1);
    }
    
    cout<<res<<endl;
 }

int main()
{
    int size,k;
    cout<<"Enter size and k: \n";
    cin>>size>>k;
    vector<int>arr(size);
    cout<<"Enter elements: \n";

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
   
 sort(arr.begin(),arr.end());
  
    int val=arr[k-1];
     int cnt=0;

     for(int i=0;i<k;i++){
         if(arr[i]==val)
         cnt++;
     }
     
     int tl=0;
     
 for(int i=0;i<size;i++){
      if(arr[i]==val)
      tl++;
     
}

 binomialcofficient(tl,cnt);
    return 0;
}