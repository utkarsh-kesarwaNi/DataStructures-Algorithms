#include <iostream>
using namespace std;

void matrixTranspose(int arr[][3], int rows, int columns, int brr[][3]) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      brr[i][j] = arr[j][i];
    }
  }
}

void printMatrix(int mat[][3], int rows, int columns) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      cout << mat[i][j] << "\t";
    }
    cout << endl;
  }
}

int main() {
  int arr[3][3] = {{70, 19, 18}, {16, 20, 34}, {40, 69, 55}}, brr[3][3];
  int rows = 3, columns = 3;
  cout << "Given matrix : " << endl;
  printMatrix(arr, rows, columns);
  matrixTranspose(arr, rows, columns, brr);
  cout << "Transpose of arr : " << endl;
  printMatrix(brr, rows, columns);
  return 0;
}