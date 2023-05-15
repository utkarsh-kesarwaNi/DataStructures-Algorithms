#include <iostream>
#include <vector>
using namespace std;

bool checkSorted(vector<int> &arr, int &n, int currentIndex) {
  if (currentIndex == n - 1) {
    return true;
  }
  if (arr[currentIndex + 1] < arr[currentIndex]) {
    return false;
  }
  return checkSorted(arr, n, currentIndex + 1);
}

int main() {
  vector<int> arr{-100, 23, 32, 45, 56};
  int n = arr.size();
  int currentIndex = 0;
  checkSorted(arr, n, currentIndex) ? cout << "Sorted" : cout << "Not sorted";
  return 0;
}