#include <iostream>
#include <vector>
using namespace std;

long mergeSortedArrays(vector<int> &arr, int start, int end,
                       vector<int> &temp) {
  int mid = start + (end - start) / 2;
  long count = 0;
  int i = start, j = mid + 1, k = start;

  while (i <= mid && j <= end) {
    if (arr[i] <= arr[j]) {
      temp[k++] = arr[i++];
    } else {
      temp[k++] = arr[j++];
      count += mid - i + 1;
    }
  }
  while (i <= mid) {
    temp[k++] = arr[i++];
  }
  while (j <= end) {
    temp[k++] = arr[j++];
  }
  while (start <= end) {
    arr[start] = temp[start];
    start++;
  }
  return count;
}
long mergeSort(vector<int> &arr, int start, int end, vector<int> &temp) {
  if (start >= end) {
    return 0;
  }

  int mid = start + (end - start) / 2;
  long count = 0;

  count += mergeSort(arr, start, mid, temp);
  count += mergeSort(arr, mid + 1, end, temp);
  count += mergeSortedArrays(arr, start, end, temp);

  return count;
}
long countInversions(vector<int> &arr) {
  vector<int> temp(arr.size(), 0);
  return mergeSort(arr, 0, arr.size() - 1, temp);
}

int main() {
  vector<int> arr{38, 20, -7, 43, 5, -9, 20, 13, 10, 10, 12, 34, 38, 100};
  int start = 0, end = arr.size() - 1;
  vector<int> temp(arr.size() - 1, 0);
  cout << countInversions(arr);
  return 0;
}