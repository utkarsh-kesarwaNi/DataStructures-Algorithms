// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one repeated number in nums, return this repeated number.
// You must solve the problem without modifying the array nums and uses only constant extra space.
// Move negative elements to start of array.
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// TC = O(n*log n)
int solve(vector<int> &nums) {
  sort(nums.begin(), nums.end());
  for (int i = 0; i < nums.size() - 1; i++) {
    if (nums[i] == nums[i + 1]) {
      return nums[i];
    }
  }
  return -1;
}

int main() {
  vector<int> nums = {3, 1, 3, 4, 2};
  cout << solve(nums);
  return 0;
}