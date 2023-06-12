#include <iostream>
#include <vector>
using namespace std;

void solution(vector<vector<char>> &board, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}

bool isSafePosition(int currentRow, int currentColumn,
                    vector<vector<char>> &board, int n) {

  int row = currentRow, column = currentColumn;
  while (column >= 0) {
    if (board[row][column] == 'Q') {
      return false;
    }
    column--;
  }
  row = currentRow, column = currentColumn;
  while (row >= 0 && column >= 0) {
    if (board[row][column] == 'Q') {
      return false;
    }
    row--, column--;
  }
  row = currentRow, column = currentColumn;
  while (row < n && column >= 0) {
    if (board[row][column] == 'Q') {
      return false;
    }
    row++, column--;
  }

  return true;
}

void solveNQueens(vector<vector<char>> &board, int column, int n) {
  if (column >= n) {
    solution(board, n);
    return;
  }

  for (int row = 0; row < n; row++) {
    if (isSafePosition(row, column, board, n)) {
      board[row][column] = 'Q';
      solveNQueens(board, column + 1, n);
      board[row][column] = '.';
    }
  }
}

int main() {
  int n;
  cin >> n;
  vector<vector<char>> board(n, vector<char>(n, '.'));
  int column = 0;
  solveNQueens(board, column, n);
  return 0;
}