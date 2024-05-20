#include<bits/stdc++.h>
using namespace std;

  void  subsets(vector<int>& nums, vector<vector<int>>&ans,int k){
        int size=nums.size();
        set<vector<int>>st;

        for(int i=0;i<(1<<size);i++){
            vector<int>temp;
            for(int j=0;j<size;j++){
            if(i&(1<<j))
            temp.push_back(nums[j]);
            }
            if(st.count(temp)==0 && temp.size()==k){
            ans.push_back(temp);
            st.insert(temp);
            }
        }

    }
 
int main()
{
    int size;
    cout<<"enter number of element in vector\n";
    cin>>size;
    vector<int>arr(size);
    cout<<"enter  element of vector\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter size of subset\n";
    cin>>k;
    vector<vector<int>>ans;
    subsets(arr,ans,k);
    for(auto x:ans){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}