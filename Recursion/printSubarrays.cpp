#include <iostream>
#include <vector>
using namespace std;

void printSubArray(vector<int> &nums, int start, int end) {
  if (end == nums.size()) {
    return;
  }
  for (int i = start; i <= end; i++) {
    cout << nums[i] << "\t";
  }
  cout << endl;
  printSubArray(nums, start, end + 1);
}

void printing(vector<int> &nums) {
  for (int start = 0; start < nums.size(); start++) {
    int end = start;
    printSubArray(nums, start, end);
    cout << endl;
  }
}

int main() {
  vector<int> nums{1, 2, 3};
  printing(nums);
  return 0;
}