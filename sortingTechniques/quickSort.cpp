#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int start, int end) {
  int pivotIndex = start, pivotElement = arr[start];

  int count = 0;
  for (int i = start + 1; i <= end; i++) {
    if (arr[i] <= pivotElement) {
      count++;
    }
  }
  int rightPosition = start + count;
  swap(arr[pivotIndex], arr[rightPosition]);
  pivotIndex = rightPosition;

  int i = start, j = end;
  while (i < pivotIndex && j > pivotIndex) {
    while (arr[i] <= arr[pivotIndex]) {
      i++;
    }
    while (arr[j] > arr[pivotIndex]) {
      j--;
    }
    if (i < pivotIndex && j > pivotIndex) {
      swap(arr[i], arr[j]);
    }
  }
  return pivotIndex;
}

void quickSort(vector<int> &arr, int start, int end) {
  if (start >= end) {
    return;
  }

  int p = partition(arr, start, end);

  quickSort(arr, start, p - 1);
  quickSort(arr, p + 1, end);
}

int main() {
  vector<int> arr{358, 20, -207, 13, -35, 20, 13, 20, 50, -1, 0, 1, 11, 12, 38};
  int start = 0, end = arr.size() - 1;
  quickSort(arr, start, end);

  for (int x : arr) {
    cout << x << " ";
  }
  return 0;
}