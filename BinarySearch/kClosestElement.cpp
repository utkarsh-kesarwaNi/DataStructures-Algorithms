#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// Two pointer
vector<int> findClosestElements(vector<int> &arr, int k, int x) {
  vector<int> ans;
  int start = 0, end = arr.size() - 1;
  while (end - start >= k) {
    if (abs(arr[start] - x) > abs(arr[end] - x)) {
      start++;
    } else {
      end--;
    }
  }
  for (int i = start; i <= end; i++) {
    ans.push_back(arr[i]);
  }
  return ans;
}

// Brute force
vector<int> kClosestElements(vector<int> &arr, int k, int x) {
  vector<pair<int, int>> mappingDifference;
  vector<int> ans;
  for (int element : arr) {
    int difference = abs(element - x);
    mappingDifference.push_back({difference, element});
  }
  sort(mappingDifference.begin(), mappingDifference.end());
  for (int i = 0; i < k; i++) {
    ans.push_back(mappingDifference[i].second);
  }
  return ans;
}

int main() {
  vector<int> arr{12, 16, 22, 30, 35, 39, 42, 45, 48, 50, 53, 55, 56};
  for (int x : findClosestElements(arr, 4, 30)) {
    cout << x << "\t";
  }
  return 0;
}