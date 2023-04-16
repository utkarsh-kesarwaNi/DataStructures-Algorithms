#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
bool isPossibleSolution(vector<int> &stalls, int k, int mid) {
  int cowCount = 1;
  int currentPosition = stalls[0];
  for (int i = 0; i < stalls.size(); i++) {
    if (stalls[i] - currentPosition >= mid) {
      cowCount++;
      currentPosition = stalls[i];
    }
    if (cowCount == k) {
      return true;
    }
  }
  return false;
}
int solve(int n, int k, vector<int> &stalls) {
  sort(stalls.begin(), stalls.end());
  int ans = -1;
  int start = 0, end = stalls[stalls.size() - 1] - stalls[0];
  int mid = start + (end - start) / 2;
  while (start <= end) {
    if (isPossibleSolution(stalls, k, mid)) {
      ans = mid;
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return ans;
}
int main() {
  vector<int> A{10, 1, 2, 7, 5};
  int n = A.size();
  int k = 3;
  cout << solve(n, k, A);
  return 0;
}