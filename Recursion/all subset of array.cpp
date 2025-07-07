#include<bits/stdc++.h>
using namespace std;

 void subset(vector<int> nums, vector<int> output, int index, vector<vector<int> >& ans) {
        //base case
        if(index >= nums.size()) {
            ans.push_back(output);
            return ;
        }
        
        //exclude
        subset(nums, output, index+1, ans);
        
        //include
        int element = nums[index];
        output.push_back(element);
        subset(nums, output, index+1, ans);
        
        
    }
    
 
int main()
{

cout<<"enter vector size\n";
int size;
cin>>size;
vector<int>nums(size,0);
cout<<"enetr vector\n";
for(int i=0;i<size;i++){
    cin>>nums[i];
}
cout<<endl;

        vector<vector<int> > ans;
        vector<int> output;
        int index = 0;
        subset(nums, output, index, ans);

 for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}