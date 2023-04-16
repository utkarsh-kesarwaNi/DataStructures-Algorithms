#include <algorithm>
#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

bool isPossible(vector<ll> &trees, ll m, ll mid) {
  ll woodCollected = 0;
  for (int i = 0; i < trees.size(); i++) {
    if (trees[i] > mid) {
      woodCollected += trees[i] - mid;
    }
  }
  return woodCollected >= m;
}

ll solve(vector<ll> &trees, ll m) {
  ll ans = -1, start = 0, end = *max_element(trees.begin(), trees.end());
  ll mid = start + (end - start) / 2;
  while (start <= end) {
    if (isPossible(trees, m, mid)) {
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
  ll n, m, treeHeights;
  cin >> n >> m;
  vector<ll> trees(n);
  while (n--) {
    cin >> treeHeights;
    trees.push_back(treeHeights);
  }
  cout << solve(trees, m);
  return 0;
}