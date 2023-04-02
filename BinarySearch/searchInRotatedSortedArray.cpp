#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int start, int end, int key) {
  int mid = start + (end - start) / 2;
  while (start <= end) {
    if (key == arr[mid]) {
      return mid;
    }
    if (key > arr[mid]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return -1;
}

int getPivotIndex(vector<int> &arr) {
  int start = 0, end = arr.size() - 1;
  int mid = start + (end - start) / 2;
  while (start < end) {
    if ((mid + 1 < arr.size()) && (arr[mid] > arr[mid + 1])) {
      return mid;
    }
    if ((mid - 1 >= 0) && (arr[mid - 1] > arr[mid])) {
      return mid - 1;
    }
    if (arr[start] >= arr[mid]) {
      end = mid - 1;
    } else {
      start = mid;
    }
    mid = start + (end - start) / 2;
  }
  return start;
}

int main() {
  vector<int> arr{1, 2, 5, 8, 0, 4};
  int key, pivotIndex;
  cout << "Enter the key to be searched: ";
  cin >> key;
  pivotIndex = getPivotIndex(arr);
  if (key >= arr[0] && key <= arr[pivotIndex]) {
    cout << "Key present at index: " << binarySearch(arr, 0, pivotIndex, key);
  } else {
    cout << "Key present at index: "
         << binarySearch(arr, pivotIndex + 1, arr.size() - 1, key);
  }
  return 0;
}