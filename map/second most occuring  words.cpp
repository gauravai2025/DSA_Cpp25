#include<bits/stdc++.h>
using namespace std;

 string secFrequent (vector<string>&arr, int n)
    {
     
        string ans="";
        int max1=0;
        int max2=0;
  unordered_map<string,int>mp;


  for(int i=0;i<n;i++){
      mp[arr[i]]++;
     
    }
    
  string maxoccur="";
    
       for(auto it:mp){
        if(it.second>max1){
        max2=max1;
        max1=it.second;
        ans=maxoccur;
        maxoccur=it.first;
        }
        else{
            if(it.second>max2){
                max2=it.second;
                ans=it.first;
            }
        }
        
        
    }
    
    return ans;
    
    
    
    }
 
int main()
{
    cout<<"enter number of strings:\n";
    int n;
    cin>>n;
    
    vector<string>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
cout<<secFrequent(arr,n)<<"\n";
 
 
 
    return 0;
}