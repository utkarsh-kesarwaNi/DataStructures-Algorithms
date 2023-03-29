// Find duplicate
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// TC = O(n*log n)
// int solve(vector<int> &nums) {
//   sort(nums.begin(), nums.end());
//   for (int i = 0; i < nums.size() - 1; i++) {
//     if (nums[i] == nums[i + 1]) {
//       return nums[i];
//     }
//   }
//   return -1;
// }

// Marking method, TC = O(n)
int solve(vector<int> &nums) {
  for (int i = 0; i < nums.size(); i++) {
    int index = abs(nums[i]);
    if (nums[index] < 0) {
      return index;
    }
    nums[index] *= -1;
  }
  return -1;
}

int main() {
  vector<int> nums = {4, 1, 2, 4, 3};
  cout << solve(nums);
  return 0;
}