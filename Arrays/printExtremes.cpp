#include <iostream>
using namespace std;

void printExtremes(int arr[], int size) {
  int start = 0, end = size - 1;
  while (start <= end) {
    if (start == end) {
      cout << arr[start] << "\t";
    } else {
      cout << arr[start] << "\t" << arr[end] << "\t";
    }
    start++;
    end--;
  }
}

int main() {
  int arr[] = {2, 11, 21, 5, 10, 42, 122};
  printExtremes(arr, 7);
  return 0;
}