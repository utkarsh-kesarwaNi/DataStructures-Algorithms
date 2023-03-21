#include <iostream>
#include <vector>
using namespace std;

vector<int> pairWithSum(vector<int> v1, int targetSum) {
  vector<int> ans;
  for (int i = 0; i < v1.size(); i++) {
    for (int j = i + 1; j < v1.size(); j++) {
      if (v1[i] + v1[j] == targetSum) {
        ans.push_back(v1[i]);
        ans.push_back(v1[j]);
        break;
      }
    }
  }
  return ans;
}

int main() {
  vector<int> v1{10, 80, 30, 20, 40, 70};
  int targetSum;
  cout << "Enter the target sum whose pair you want to find : ";
  cin >> targetSum;
  vector<int> ans = pairWithSum(v1, targetSum);
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
  return 0;
}