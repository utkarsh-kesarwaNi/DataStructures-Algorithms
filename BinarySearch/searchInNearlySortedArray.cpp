// Given a sorted array arr[] of size N, some elements of array are moved to either of the adjacent positions, i.e., arr[i] may be present at arr[i+1] or arr[i-1] i.e. arr[i] can only be swapped with either arr[i+1] or arr[i-1]. The task is to search for an element in this array.
#include <iostream>
#include <vector>
using namespace std;

int searchInNearlySortedArray(vector<int> &arr, int key) {
  int start = 0, end = arr.size() - 1;
  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (arr[mid] == key)
      return mid;
    if (mid - 1 >= start && key == arr[mid - 1])
      return mid - 1;
    if (mid + 1 <= end && key == arr[mid + 1])
      return mid + 1;

    if (key > arr[mid]) {
      start = mid + 2;
    } else {
      end = mid - 2;
    }
  }
  return -1;
}

int main() {
  vector<int> arr{10, 3, 40, 20, 50, 80, 70};
  int key;
  cout << "Enter the key to search: ";
  cin >> key;
  cout << key << " present at index: " << searchInNearlySortedArray(arr, key);
  return 0;
}