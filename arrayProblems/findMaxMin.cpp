#include <iostream>
#include <limits.h>
using namespace std;

int findMaximum(int arr[], int size) {
  int maxE = INT_MIN;
  for (int i = 0; i < size; i++) {
    if (arr[i] > maxE) {
      maxE = arr[i];
    }
  }
  return maxE;
}
int findMinimum(int arr[], int size) {
  int minE = INT_MAX;
  for (int i = 0; i < size; i++) {
    if (arr[i] < minE) {
      minE = arr[i];
    }
  }
  return minE;
}

int main() {
  int arr[] = {2, 11, 621, 5, 10, 42, 122, 341, 9, -7, 1, 7, 31, -65, 104};
  cout << "Maximum element in the given array is " << findMaximum(arr, 15)
       << endl;
  cout << "Minimum element in the given array is " << findMinimum(arr, 15)
       << endl;
  return 0;
}