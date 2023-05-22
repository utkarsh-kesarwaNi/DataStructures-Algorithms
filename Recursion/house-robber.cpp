#include <iostream>
#include <vector>
using namespace std;

int findSum(vector<int> &nums, int currentIndex) {
  if (currentIndex >= nums.size()) {
    return 0;
  }
  int rob0 = nums[currentIndex] + findSum(nums, currentIndex + 2);
  int rob1 = findSum(nums, currentIndex + 1);

  return max(rob0, rob1);
}
int rob(vector<int> &nums) { return findSum(nums, 0); }

int main() {
  vector<int> prices{7, 6, 4, 3, 10};
  cout << rob(prices);
  return 0;
}