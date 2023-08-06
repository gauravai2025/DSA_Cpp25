#include<bits/stdc++.h>
using namespace std;

 void  xorQueries(int *arr, vector<vector<int>>& queries,vector<int>& ans,int qsize,int size) {
        int pre[size+1];
        pre[0]=0;
        //pre[i] stores xor of all elements from 0 to i-1
        for(int i=0;i<size;i++){
            pre[i+1]=pre[i]^arr[i];
        }
        int x;
        for(int i=0;i<qsize;i++){
            x=pre[queries[i][0]]^pre[queries[i][1]+1];
            ans.push_back(x);

        }
        

        
    }
    
 
int main()
{
cout<<"enter the size of array:\n";
int size;
cin>>size;
int arr[size];
cout<<"enter the elements of array:\n";
for(int i=0;i<size;i++)
{
    cin>>arr[i];
}
cout<<"enter the number of queries:\n";
int q;
cin>>q;
cout<<"enter queries:\n";
vector<vector<int>>queries;;
while(q--){
    int l,r;
    cin>>l>>r;
    queries.push_back({l,r});
}
 vector<int>ans;
 xorQueries(arr,queries,ans,q,size);
 cout<<"the xor of queries are:\n";
  for(auto &it:ans){
        cout<<it<<" \n";
 }
 

 
    return 0;
}