#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int> &arr) {
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
  cout << "Pivot element is present at index: " << pivotIndex(arr);
  return 0;
}