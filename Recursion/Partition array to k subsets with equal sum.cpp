#include<bits/stdc++.h>
using namespace std;

 bool solve(vector<int>& arr, vector<int>& part, int k, int idx, int target) {
     
        if (idx == arr.size()) {
            for (int i = 0; i < k; i++) {
                if (part[i] != target)
                return false;
            }
            
            return true;
        }

        for (int i = 0; i < k; i++) {
            
            if (part[i] + arr[idx] > target) continue; // Prune if it exceeds the target
            
            part[i] += arr[idx];
            
            if (solve(arr, part, k, idx + 1, target))
            return true;
            
            part[i] -= arr[idx]; // Backtrack
            
            // Early exit: If the current partition is empty and fails, no need to try further
            if (part[i] == 0) break;
        }

        return false;
    }

    bool isKPartitionPossible(vector<int>& arr, int k) {
        int sum = accumulate(arr.begin(), arr.end(), 0);
        
        if (sum % k != 0) 
        return false; // Total sum must be divisible by k
       
        if (k == 1) 
        return true;       // Single partition is always possible
       
        if (k > arr.size()) 
        return false; // More partitions than elements is not possible
        
        int target = sum / k;
        
        sort(arr.rbegin(), arr.rend()); // Sort in descending order for better pruning
        
        vector<int> part(k, 0); // Initialize k partitions with 0
        
        return solve(arr, part, k, 0, target);
    }
 
int main()
{

    int size;
    cin>>size;

    vector<int>arr(size);

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;

    if(isKPartitionPossible(arr,k))
    cout<<"partition possible\n";
    else
    cout<<"not possible\n";

    return 0;
}