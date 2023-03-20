#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
  int start = 0, end = size - 1;
  while (start <= end) {
    swap(arr[start++], arr[end--]);
  }
}

int main() {
  int arr[] = {2, 11, 21, 5, 42, 122};
  reverseArray(arr, 6);
  for (int i = 0; i < 6; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}