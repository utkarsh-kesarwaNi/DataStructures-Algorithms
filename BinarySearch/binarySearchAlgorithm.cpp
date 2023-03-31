#include <iostream>
#include <vector>
using namespace std;

int binarySearchAlgorithm(vector<int> &arr, int size, int target) {
  int start = 0, end = size - 1;
  int mid = start + (end - start) / 2;
  while (start <= end) {
    if (target == arr[mid]) {
      return mid;
    }
    if (target < arr[mid]) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
    mid = start + (end - start) / 2;
  }
  return -1;
}

int main() {
  vector<int> arr = {2, 13, 17, 25, 30, 49, 70, 80, 341, 558, 670};
  int size = arr.size();
  int target;
  cout << "Enter the target element to search: ";
  cin >> target;
  cout << "Target found at index: " << binarySearchAlgorithm(arr, size, target);
  return 0;
}