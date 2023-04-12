// // K-diff Pairs in an Array
// Given an array of integers nums and an integer k, return the number of unique k-diff pairs in the array.
// A k-diff pair is an integer pair (nums[i], nums[j]), where the following are true:
// 0 <= i, j < nums.length
// i != j
// nums[i] - nums[j] == k
#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

// Using Binary Search
int binarySearch(vector<int> &nums, int start, int x) {
  int end = nums.size() - 1;
  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (nums[mid] == x) {
      return mid;
    }
    if (x > nums[mid]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  return -1;
}
int findPairsUsingBS(vector<int> &nums, int k) {
  sort(nums.begin(), nums.end());
  set<pair<int, int>> ans;
  for (int i = 0; i < nums.size(); i++) {
    if (binarySearch(nums, i + 1, nums[i] + k) != -1) {
      ans.insert({nums[i], nums[i] + k});
    }
  }
  return ans.size();
}

// 2 pointer approach
int findKDiffPairs(vector<int> &nums, int k) {
  sort(nums.begin(), nums.end());
  set<pair<int, int>> ans;
  int i = 0, j = 1;
  while (j < nums.size()) {
    int difference = nums[j] - nums[i];
    if (difference == k) {
      ans.insert({nums[i], nums[j]});
      i++, j++;
    } else if (difference > k) {
      i++;
    } else {
      j++;
    }
    if (i == j)
      j++;
  }
  return ans.size();
}

// Brute force
int kDiffPairs(vector<int> &nums, int k) {
  int pairCount = 0;
  for (int i = 0; i < nums.size(); i++) {
    for (int j = i + 1; j < nums.size(); j++) {
      if (abs(nums[i] - nums[j]) == k) {
        cout << "(" << nums[i] << "," << nums[j] << ")" << endl;
        pairCount++;
      }
    }
  }
  return pairCount;
}

int main() {
  vector<int> nums{3, 1, 4, 1, 5};
  cout << findPairsUsingBS(nums, 2);
  return 0;
}