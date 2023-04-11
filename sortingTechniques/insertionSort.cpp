#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr) {
  int n = arr.size();
  for (int round = 1; round < n; round++) {
    int value = arr[round];
    int j = round - 1;
    for (; j >= 0; j--) {
      if (arr[j] > value) {
        arr[j + 1] = arr[j];
      } else {
        break;
      }
    }
    arr[j + 1] = value;
  }
}

int main() {
  vector<int> arr{3, -3, 7, 17, 0, 1, 11, 9, -1, -4, 40, 4};
  insertionSort(arr);
  for (int x : arr) {
    cout << x << "\t";
  }
  return 0;
}