#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr) {
  int n = arr.size();
  for (int i = 0; i < n - 1; i++) {
    int minIndex = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }
    swap(arr[i], arr[minIndex]);
  }
}

int main() {
  vector<int> arr{3, 3, 7, 170, 10, 1, 11, 9, -10, -4, 40, 4};
  selectionSort(arr);
  for (int x : arr) {
    cout << x << "\t";
  }
  return 0;
}