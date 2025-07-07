#include<bits/stdc++.h>
using namespace std;

void subset(vector<int>&arr,int size){
   
  cout<<"The subset are:\n";
  set<vector<int>> uniqueSubsets; // To store unique subsets
    for(int i=0;i<(1<<size);i++){
       vector<int>otpt;
        for(int j=0;j<size;j++){
         if(i&(1<<j))
         otpt.push_back(arr[j]);
        }

        vector<int> sortedSubset = otpt; // Create a copy to sort
        sort(sortedSubset.begin(), sortedSubset.end()); // Sort the subset
        uniqueSubsets.insert(sortedSubset); // Insert the sorted subset into the set
    }
    vector<vector<int>> ans(uniqueSubsets.begin(), uniqueSubsets.end()); // Convert set to vector
        
    for(const auto& subset : ans) {
        for(auto it:subset){
            cout<<it<<" ";
        }
        cout<<endl;
    }


}

int main()
{
int size;
cout<<"Enter the size of array"<<endl;

cin>>size;
vector<int> arr(size);

for(int i=0;i<size;i++){
    cin>>arr[i];
}

 subset(arr,size);
    return 0;
}