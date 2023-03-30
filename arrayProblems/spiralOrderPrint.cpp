#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix, int rows, int columns) {
  int count = 0, total_elements = rows * columns;
  vector<int> ans;
  int startRow = 0, endColumn = columns - 1, endRow = rows - 1, startColumn = 0;

  while (count < total_elements) {
    for (int i = startColumn; i <= endColumn && count < total_elements; i++) {
      ans.push_back(matrix[startRow][i]);
      count++;
    }
    startRow++;

    for (int i = startRow; i <= endRow && count < total_elements; i++) {
      ans.push_back(matrix[i][endColumn]);
      count++;
    }
    endColumn--;

    for (int i = endColumn; i >= startColumn && count < total_elements; i--) {
      ans.push_back(matrix[endRow][i]);
      count++;
    }
    endRow--;

    for (int i = endRow; i >= startRow && count < total_elements; i--) {
      ans.push_back(matrix[i][startColumn]);
      count++;
    }
    startColumn++;
  }
  return ans;
}

int main() {
  vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {11, 12, 13}};
  int rows = matrix.size();
  int columns = matrix[0].size();
  for (int x : spiralOrder(matrix, rows, columns)) {
    cout << x << "\t";
  }
  return 0;
}