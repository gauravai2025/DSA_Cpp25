#include<bits/stdc++.h>
using namespace std;


void sum2(vector<pair<int,int>>&arr,int size,int idx,vector<int>&ans,int target,int ele1,int ele2){
   
        // 2 pointer for 2 sum sorted array
        int left=idx,right=size-1;

        while(left<right){
          
            int leftval=arr[left].first;
            int rightval=arr[right].first;

            if(leftval+rightval>target)
            right--;
            else if(leftval+rightval<target)
            left++;
            else{
             ans.push_back(ele1);
              ans.push_back(ele2);
               ans.push_back(arr[left].second);
            ans.push_back(arr[right].second); 
             return;  
            }
        }
}
    
void sum3(vector<pair<int,int>>&arr,int size,int idx, vector<int>&ans,int target,int ele1){

    for(int i=idx;i<size;i++){
      
        if(i!=idx && arr[i].first==arr[i-1].first)
        continue;

        sum2(arr,size,i+1,ans,target-arr[i].first,ele1,arr[i].second);

        if(!ans.empty())
        return;
    }

}
 
int main()
{
    int n,x;
    cin>>n>>x;

    vector<pair<int,int>>arr;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back({x,i+1});
    }

    sort(arr.begin(),arr.end());
    vector<int>ans;

    for(int i=0;i<n;i++){

        if(i!=0 && arr[i].first==arr[i-1].first)
        continue;

        sum3(arr,n,i+1,ans,x-arr[i].first,arr[i].second);

        if(!ans.empty())
        break;
    }   

    if(ans.empty())
    cout<<"IMPOSSIBLE";
    else
    {
    for(int ele:ans)
    cout<<ele<<" ";  
    }
    return 0;
}