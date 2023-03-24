#include <iostream>
#include <limits.h>
using namespace std;

int findMaximum1DArray(int arr[], int size) {
  int maxE = INT_MIN;
  for (int i = 0; i < size; i++) {
    if (arr[i] > maxE) {
      maxE = arr[i];
    }
  }
  return maxE;
}
int findMinimum1DArray(int arr[], int size) {
  int minE = INT_MAX;
  for (int i = 0; i < size; i++) {
    if (arr[i] < minE) {
      minE = arr[i];
    }
  }
  return minE;
}

int findMaximum2DArray(int brr[][3], int rows, int columns) {
  int maxE = INT_MIN;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      if (brr[i][j] > maxE) {
        maxE = brr[i][j];
      }
    }
  }
  return maxE;
}
int findMinimum2DArray(int brr[][3], int rows, int columns) {
  int minE = INT_MAX;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      if (brr[i][j] < minE) {
        minE = brr[i][j];
      }
    }
  }
  return minE;
}

int main() {
  int arr[] = {2, 11, 621, 5, 10, 42, 122, 341, 9, -7, 1, 7, 31, -65, 104},
      brr[3][3] = {{70, 19, 8}, {-1, 202, 3}, {-40, -69, 5}};
  int rows = 3, columns = 3;
  cout << "Maximum element in arr[] is " << findMaximum1DArray(arr, 15) << endl;
  cout << "Minimum element in arr[] is " << findMinimum1DArray(arr, 15) << endl;

  cout << "Maximum element in brr[][] is "
       << findMaximum2DArray(brr, rows, columns) << endl;
  cout << "Minimum element in brr[][] is "
       << findMinimum2DArray(brr, rows, columns) << endl;
  return 0;
}