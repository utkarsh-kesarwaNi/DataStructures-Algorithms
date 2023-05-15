#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int start, int end, int key) {
  if (start > end) {
    return -1;
  }
  int mid = start + (end - start) / 2;
  if (key == arr[mid]) {
    return mid;
  }
  if (key > arr[mid]) {
    return binarySearch(arr, mid + 1, end, key);
  } else {
    return binarySearch(arr, start, mid - 1, key);
  }
}

int main() {
  vector<int> arr{120, 223, 432, 545, 9856};
  int key = 9856;
  int start = 0, end = arr.size() - 1;
  cout << key << " present at index " << binarySearch(arr, start, end, key);
  return 0;
}