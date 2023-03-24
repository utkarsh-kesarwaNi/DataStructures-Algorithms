#include <iostream>
using namespace std;

void printRowSum(int arr[][3], int rows, int columns) {
  for (int i = 0; i < rows; i++) {
    int rowSum = 0;
    for (int j = 0; j < columns; j++) {
      rowSum += arr[i][j];
    }
    cout << "Row " << i << " sum = " << rowSum << endl;
  }
}
void printColumnSum(int arr[][3], int rows, int columns) {
  for (int i = 0; i < rows; i++) {
    int columnSum = 0;
    for (int j = 0; j < columns; j++) {
      columnSum += arr[j][i];
    }
    cout << "Column " << i << " sum = " << columnSum << endl;
  }
}

int main() {
  int rows = 3, columns = 3;
  int arr[3][3];
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      cin >> arr[i][j];
    }
  }
  printRowSum(arr, rows, columns);
  printColumnSum(arr, rows, columns);
  return 0;
}