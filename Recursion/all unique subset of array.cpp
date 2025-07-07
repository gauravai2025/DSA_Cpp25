#include <bits/stdc++.h>
using namespace std;

void subset(vector<int> nums, vector<int> output, int index, set<vector<int>>&uniqueSubsets)
{
    // base case
    if (index >= nums.size())
    {
        vector<int> temp = output; // Create a copy of the current subset
        sort(temp.begin(), temp.end()); // Sort the subset to ensure uniqueness
        uniqueSubsets.insert(temp);
        return;
    }

    // exclude
    subset(nums, output, index + 1, uniqueSubsets);

    // include
    int element = nums[index];
    output.push_back(element);
    subset(nums, output, index + 1,uniqueSubsets);
}

int main()
{

    cout << "enter vector size\n";
    int size;
    cin >> size;
    vector<int> nums(size, 0);
    cout << "enetr vector\n";
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }
    cout << endl;
  
    set<vector<int>>uniqueSubsets; // To store unique subsets
    vector<int> output;
    int index = 0;
    subset(nums, output, index,uniqueSubsets);
    
     vector<vector<int>> ans(uniqueSubsets.begin(), uniqueSubsets.end()); 


    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}