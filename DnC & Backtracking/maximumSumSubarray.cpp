#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

int maxSum(vector<int> &nums, int start, int end) {
  if (start == end)
    return nums[start];

  int maxLeftBorderSum = INT_MIN, maxRightBorderSum = INT_MIN;
  int leftBorderSum = 0, rightBorderSum = 0;
  int mid = start + (end - start) / 2;
  int maxLeftSum = maxSum(nums, start, mid);
  int maxRightSum = maxSum(nums, mid + 1, end);

  for (int i = mid; i >= start; i--) {
    leftBorderSum += nums[i];
    maxLeftBorderSum = max(maxLeftBorderSum, leftBorderSum);
  }
  for (int i = mid + 1; i <= end; i++) {
    rightBorderSum += nums[i];
    maxRightBorderSum = max(maxRightBorderSum, rightBorderSum);
  }

  int crossBorderSum = maxRightBorderSum + maxLeftBorderSum;

  return max(maxLeftSum, max(maxRightSum, crossBorderSum));
}

int maxSubArray(vector<int> &nums) { return maxSum(nums, 0, nums.size() - 1); }

int main() {
  vector<int> arr{5, 4, -1, 7, 8};
  cout << maxSubArray(arr);
  return 0;
}