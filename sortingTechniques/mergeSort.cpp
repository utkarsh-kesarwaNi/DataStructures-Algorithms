#include <iostream>
#include <vector>
using namespace std;

void mergeSortedArrays(vector<int> &arr, int start, int end) {
  int mid = start + (end - start) / 2;

  int len1 = mid - start + 1;
  int len2 = end - mid;

  int *partOne = new int[len1];
  int *partTwo = new int[len2];

  int k = start;
  for (int i = 0; i < len1; i++) {
    partOne[i] = arr[k];
    k++;
  }
  k = mid + 1;
  for (int i = 0; i < len2; i++) {
    partTwo[i] = arr[k];
    k++;
  }

  int partOneIndex = 0, partTwoIndex = 0;
  int mainArrayIndex = start;

  while (partOneIndex < len1 && partTwoIndex < len2) {
    if (partOne[partOneIndex] < partTwo[partTwoIndex]) {
      arr[mainArrayIndex++] = partOne[partOneIndex++];
    } else {
      arr[mainArrayIndex++] = partTwo[partTwoIndex++];
    }
  }
  while (partOneIndex < len1) {
    arr[mainArrayIndex++] = partOne[partOneIndex++];
  }
  while (partTwoIndex < len2) {
    arr[mainArrayIndex++] = partTwo[partTwoIndex++];
  }
}

void mergeSort(vector<int> &arr, int start, int end) {
  if (start >= end) {
    return;
  }
  int mid = start + (end - start) / 2;

  mergeSort(arr, start, mid);
  mergeSort(arr, mid + 1, end);

  mergeSortedArrays(arr, start, end);
}

int main() {
  vector<int> arr{38, 20, -27, 43, 35, -9, 20};
  int start = 0, end = arr.size() - 1;
  mergeSort(arr, start, end);

  for (int x : arr) {
    cout << x << " ";
  }
  return 0;
}