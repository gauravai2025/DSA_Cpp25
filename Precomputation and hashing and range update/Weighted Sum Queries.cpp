#include<bits/stdc++.h>
using namespace std;

// Given a 1-indexed integer array arr[] and a 2D array queries[][], where each queries[i] = [l, r] represents a query.

// For each query, compute the following value:
// Since the answer can be large, return the result of each query modulo 109+7

const int mod=1e9+7;

 void findQuery(vector<int>& arr,vector<vector<int>>& queries){
        
        int size=arr.size();
        vector<long long int>pre1(size+1,0);
        vector<long long int>pre2(size+1,0);
        vector<long long int>pre3(size+1,0);

        
        for(int i=1;i<=size;i++){
            pre1[i]=pre1[i-1]+arr[i-1];
        }
        
         for(int i=1;i<=size;i++){
            pre2[i]=pre2[i-1]+(1ll*i*arr[i-1])%mod;
            pre2[i]%=mod;
        }
        
         for(int i=1;i<=size;i++){
            int val=(1ll*i*i)%mod; 
            pre3[i]=pre3[i-1]+(1ll*val*arr[i-1])%mod;
            pre3[i]%=mod;
        }
        
        vector<int>ans;
        
        for(auto qry:queries){
            
            int l=qry[0];
            int r=qry[1];
            
            long long int val1=1ll*(l-1)*(l-1);
            val1%=mod;
            val1=(val1*(pre1[r]-pre1[l-1]))%mod;
            
            long long int val2=(pre3[r]-pre3[l-1]+mod)%mod;
            
            
            long long int val3=(pre2[r]-pre2[l-1]+mod)%mod;
            val3=(val3*(2*l-2))%mod;
            
            val3%=mod;
            
            long long int rslt=(val1+val2-val3+mod)%mod;
            ans.push_back(rslt);
        }
        
        for(int ele:ans){
        cout<<ele<<" ";
        }
    }
 
int main()
{
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++){
    cin>>arr[i];
    }

    int q;
    cin>>q;

    vector<vector<int>>queries;

    while(q--){
     int l,r;
     cin>>l>>r;
    queries.push_back({l,r});   
    }

    findQuery(arr,queries);

return 0;
}