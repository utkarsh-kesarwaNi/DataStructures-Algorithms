#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void permutations(vector<int> &arr, vector<vector<int>> &ans, int i) {
  if (i >= arr.size()) {
    ans.push_back(arr);
    return;
  }
  unordered_set<int> st;
  for (int j = i; j < arr.size(); j++) {
    if (st.count(arr[j]) == 1) {
      continue;
    }
    st.insert(arr[j]);
    swap(arr[i], arr[j]);
    permutations(arr, ans, i + 1);
    swap(arr[i], arr[j]);
  }
}

int main() {
  vector<int> arr{9, 0, 4, 9};
  vector<vector<int>> ans;
  int index = 0;
  permutations(arr, ans, index);

  for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[0].size(); j++) {
      cout << ans[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}