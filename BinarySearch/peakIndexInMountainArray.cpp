#include <iostream>
#include <vector>
using namespace std;

// Brute force
// TC=O(N)
int getPeakElement(vector<int> &nums) {
  if (nums.size() == 1) {
    return 0;
  }
  for (int i = 0; i < nums.size(); i++) {
    if (i == 0 && nums[0] > nums[1]) {
      return 0;
    }
    if (i == nums.size() - 1 && nums[i] > nums[i - 1]) {
      return nums.size() - 1;
    }
    if (nums[i] > nums[i + 1] && nums[i] > nums[i - 1]) {
      return i;
    }
  }
  return -1;
}

// Optimized time complexity using Binary Search
int peakIndexInMountainArray(vector<int> &arr) {
  int start = 0, end = arr.size() - 1;
  int mid = start + (end - start) / 2;

  while (start < end) {
    if (arr[mid] < arr[mid + 1]) {
      start = mid + 1;
    } else {
      end = mid;
    }
    mid = start + (end - start) / 2;
  }
  return start;
}

int main() {
  vector<int> arr{0, 10, -1, -9};
  cout << "Peak element is present at index: " << peakIndexInMountainArray(arr);
  return 0;
}