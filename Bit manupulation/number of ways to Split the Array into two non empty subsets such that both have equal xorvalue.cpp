#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7; 

// Given an array arr[] of integers, the task is to count the number of ways to split given array elements into two disjoint groups such that the XOR of elements of each group is equal.
// Note: The answer could be very large so print it by doing modulo with 109 + 7. If it is not possible to split the array into two disjoint groups, then print 0.

// Function to calculate power of 2 modulo MOD

 
long long powerOfTwo(int exp) {
    long long result = 1, base = 2;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

 int countgroup(vector<int>& arr){
  int n = arr.size();
    
    // Compute XOR of all elements
    int totalXOR = 0;
    for (int num : arr) {
        totalXOR ^= num;
    }
    
    // If total XOR is non-zero, return 0  // every bit position have not even number of set bit count of all element of array
    // totalxor is not zero then it is not possible to split the array into two disjoint groups
    if (totalXOR != 0){
        return 0;
    }
    
    // Otherwise, return 2^(n-1) % MOD
    return powerOfTwo(n - 1)-1;
}
 
int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
       
     cout<<"enter element\n";
     
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

 cout<<"number of ways: "<<countgroup(arr);
 
    return 0;
}