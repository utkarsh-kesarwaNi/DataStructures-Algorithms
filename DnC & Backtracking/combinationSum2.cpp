#include <iostream>
#include <algorithm>
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
    if (i > index && candidates[i] == candidates[i - 1]) {
      continue;
    }
    v.push_back(candidates[i]);
    findCombinations(candidates, target - candidates[i], ans, v, i + 1);
    v.pop_back();
  }
}

vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
  sort(candidates.begin(), candidates.end());
  vector<vector<int>> ans;
  vector<int> v;
  int index = 0;
  findCombinations(candidates, target, ans, v, index);
  return ans;
}

int main() {
  vector<int> arr{2, 3, 4, 7, 8};
  int target = 11;
  vector<vector<int>> ans = combinationSum2(arr, target);
  for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[0].size(); j++) {
      cout << ans[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}