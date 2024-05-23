#include <bits/stdc++.h>
#include <vector>

using namespace std;

int pivotIndex(vector<int>& nums) {
	int left = 0, pivot = 0, right = 0;
	for (int i = 1; i < nums.size(); i++) {
		right += nums[i];
	}
	while (pivot < nums.size() - 1 && right != left) {
		pivot++;
		right -= nums[pivot];
		left += nums[pivot - 1];
	}
	return (left == right) ? pivot : -1;
}

int main() {
	vector<int> nums = {1, 7, 3, 6, 5, 6};
	int result = pivotIndex(nums);
	cout <<"First Point of equilibrium is at index "<< result << endl;
	return 0;
}
