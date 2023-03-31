#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(vector<int> &arr, int size, int target) {
  int start = 0, end = size - 1;
  int ans = -1;
  int mid = start + (end - start) / 2;
  while (start <= end) {
    if (target == arr[mid]) {
      ans = mid;
      end = mid - 1;
    } else if (target < arr[mid]) {
      end = mid - 1;
    } else if (target > arr[mid]) {
      start = mid + 1;
    }
    mid = start + (end - start) / 2;
  }
  return ans;
}

int lastOccurrence(vector<int> &arr, int size, int target) {
  int start = 0, end = size - 1;
  int ans = -1;
  int mid = start + (end - start) / 2;
  while (start <= end) {
    if (target == arr[mid]) {
      ans = mid;
      start = mid + 1;
    } else if (target < arr[mid]) {
      end = mid - 1;
    } else if (target > arr[mid]) {
      start = mid + 1;
    }
    mid = start + (end - start) / 2;
  }
  return ans;
}

int main() {
  vector<int> arr{2, 2, 2, 2, 2, 3, 4, 5, 6, 6, 6, 7, 10, 10};
  int size = arr.size();
  int target;
  cout << "Enter the target element to search: ";
  cin >> target;
  cout << "First occurrence of target found at index: "
       << firstOccurrence(arr, size, target) << endl;
  cout << "Last occurrence of target found at index: "
       << lastOccurrence(arr, size, target);
  return 0;
}