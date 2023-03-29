#include <iostream>
#include <vector>
using namespace std;

void wavePrintColumnWise(vector<vector<int>> &matrix, int rows, int columns) {
  for (int col = 0; col < columns; col++) {
    if ((col & 1) == 0) {
      for (int row = 0; row < rows; row++) {
        cout << matrix[row][col] << "\t";
      }
    } else {
      for (int row = rows - 1; row >= 0; row--) {
        cout << matrix[row][col] << "\t";
      }
    }
  }
}
void wavePrintRowWise(vector<vector<int>> &matrix, int rows, int columns) {
  for (int row = 0; row < rows; row++) {
    if ((row & 1) == 0) {
      for (int col = 0; col < columns; col++) {
        cout << matrix[row][col] << "\t";
      }
    } else {
      for (int col = columns - 1; col >= 0; col--) {
        cout << matrix[row][col] << "\t";
      }
    }
  }
}

int main() {
  vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {11, 12, 13}};
  int rows = matrix.size();
  int columns = matrix[0].size();
  wavePrintColumnWise(matrix, rows, columns);
  cout << endl;
  wavePrintRowWise(matrix, rows, columns);
  return 0;
}