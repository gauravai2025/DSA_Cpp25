#include <bits/stdc++.h>
using namespace std;

int minProductSubarray(vector<int>& nums) {
    int n = nums.size();

    if (n == 0) 
    return 0;

    int minProduct = nums[0];
    int maxProduct = nums[0];
    int result = nums[0];

    for (int i = 1; i < n; ++i) {
        if (nums[i] == 0) {
            minProduct = 1;
            maxProduct = 1;
            result = min(result, 0);
            continue;
        }

        int tempMax = max(nums[i], max(nums[i] * maxProduct, nums[i] * minProduct));
        minProduct = min(nums[i], min(nums[i] * maxProduct, nums[i] * minProduct));
        maxProduct = tempMax;

        result = min(result, minProduct);
    }

    return result;
}

int main() {

    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    vector<int> nums(size); 
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }
    cout << "The minimum product subarray is: " << minProductSubarray(nums) << endl;
    return 0;
}
