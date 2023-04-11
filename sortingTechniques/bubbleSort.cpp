#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr) {
  int n = arr.size();
  for (int i = 0; i < n - 1; i++) {
    bool swapped = false;
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swapped = true;
        swap(arr[j], arr[j + 1]);
      }
    }
    if (swapped == false) {
      break;
    }
  }
}

int main() {
  vector<int> arr{3, 3, 7, 17, 0, 1, 11, 9, -1, -4, 40, 4};
  bubbleSort(arr);
  for (int x : arr) {
    cout << x << "\t";
  }
  return 0;
}