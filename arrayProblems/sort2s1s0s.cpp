#include <iostream>
#include <vector>
using namespace std;

void sort2s1s0s(vector<int> &nums) {
  int start = 0, mid = 0, end = nums.size() - 1;
  while (mid <= end) {
    if (nums[mid] == 0) {
      swap(nums[mid], nums[start]);
      start++;
      mid++;
    } else if (nums[mid] == 1) {
      mid++;
    } else {
      swap(nums[mid], nums[end]);
      end--;
    }
  }
}

int main() {
  vector<int> nums = {2, 1, 2, 1, 2, 0, 0, 2, 0, 1, 1, 0, 2};
  sort2s1s0s(nums);
  for (int element : nums) {
    cout << element << "\t";
  }
  return 0;
}