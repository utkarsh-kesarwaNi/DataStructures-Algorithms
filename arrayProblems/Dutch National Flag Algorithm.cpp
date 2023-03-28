//Move negative elements to start of array.
#include <iostream>
#include <vector>
using namespace std;

void reArrange(vector<int> &nums) {
  int start = 0, end = nums.size() - 1;
  while (start < end) {
    if (nums[start] < 0) {
      start++;
    } else if (nums[end] > 0) {
      end--;
    } else {
      swap(nums[start], nums[end]);
    }
  }
}

int main() {
  vector<int> nums = {-4, -11, 2, -10, -2, 90, -7};
  reArrange(nums);
  for (int element : nums) {
    cout << element << "\t";
  }
  return 0;
}