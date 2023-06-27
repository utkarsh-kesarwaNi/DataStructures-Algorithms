#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
void findCombinations(vector<int> &candidates, int target,
                      vector<vector<int>> &ans, vector<int> &v, int index) {
  if (target == 0) {
    ans.push_back(v);
    return;
  }
  if (target < 0) {
    return;
  }

  for (int i = index; i < candidates.size(); i++) {
    v.push_back(candidates[i]);
    findCombinations(candidates, target - candidates[i], ans, v, i);
    v.pop_back();
  }
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
  vector<vector<int>> ans;
  vector<int> v;
  int index = 0;
  findCombinations(candidates, target, ans, v, index);
  return ans;
}

int main() {
  vector<int> arr{2, 3, 4, 7, 8};
  int target = 9;
  vector<vector<int>> ans = combinationSum(arr, target);
  for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[0].size(); j++) {
      cout << ans[i][j] << "\n";
    }
    cout << "\n";
  }
  return 0;
}