#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

void solve(vector<int> &arr, int currentIndex, int sum, int &maxi) {
  if (currentIndex > arr.size()) {
    maxi = max(maxi, sum);
    return;
  }
  solve(arr, currentIndex + 2, sum + arr[currentIndex], maxi);
  solve(arr, currentIndex + 1, sum, maxi);
}

int main() {
  vector<int> arr{2, 1, 4, 9};
  int sum = 0, currentIndex = 0;
  int maxi = INT_MIN;
  solve(arr, currentIndex, sum, maxi);
  cout << maxi;
  return 0;
}