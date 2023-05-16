#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

int solve(vector<int> &coinValues, int target) {
  if (target == 0) {
    return 0;
  }
  if (target < 0) {
    return INT_MAX;
  }
  int minCoins = INT_MAX;
  for (int i = 0; i < coinValues.size(); i++) {
    int ans = solve(coinValues, target - coinValues[i]);

    if (ans != INT_MAX) {
      minCoins = min(minCoins, ans+1);
    }
  }
  return minCoins;
}

int main() {
  vector<int> coinValues{2, 3, 5};
  int target = 1;

  cout << solve(coinValues, target);
  return 0;
}