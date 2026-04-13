#include<bits/stdc++.h>
using namespace std;

 void xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        int pre[n+1];
        pre[0]=0;
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]^arr[i];
        }
        vector<int>ans;
        int x;
        for(int i=0;i<queries.size();i++){
            x=pre[queries[i][0]-1]^pre[queries[i][1]];
            ans.push_back(x);

        }
        for(auto x:ans)
        cout<<x<<" ";
       

        
    }
 
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<vector<int>>queries(q,vector<int>(2));
    for(int i=0;i<q;i++){
        cin>>queries[i][0]>>queries[i][1];
    }

    xorQueries(arr,queries);

 
 
 
    return 0;
}