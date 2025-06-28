#include<bits/stdc++.h>
using namespace std;

void findMatrix(vector<int>& nums,vector<vector<int>>&ans) {

    int size=nums.size();
    map<int,int>mp;

      for(int i=0;i<size;i++){
         mp[nums[i]]++;
      }


while(mp.size()>0){
   vector<int>row;
     // Use an iterator to safely iterate and modify the map
            for (auto it = mp.begin(); it != mp.end();) {
             
                row.push_back(it->first);

                // Decrement the count or erase the element if count becomes zero
                if (it->second == 1) {
                it = mp.erase(it);  // Erase and move to the next iterator
                } 
                
                else {
                    it->second--;
                    ++it;  // Move to the next iterator
                }


            }
            ans.push_back(row);
    }  

    
}


int main()
{

int size;
cout<<"Enter the size of array"<<endl;
cin>>size;
vector<int>nums(size);

cout<<"Enter the elements of array"<<endl;

for(int i=0;i<size;i++){
    cin>>nums[i];
}

vector<vector<int>>ans; 

 findMatrix(nums,ans);
 
 for(auto it:ans){
     for(auto i:it){
         cout<<i<<" ";
     }
     cout<<endl;
 }
    return 0;
}