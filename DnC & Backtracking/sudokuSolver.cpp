#include <iostream>
#include <vector>
using namespace std;
bool isSafe(int value, vector<vector<char>> &board, int currentRow,
            int currentColumn) {
  int n = board.size();
  for (int i = 0; i < n; i++) {
    if (board[currentRow][i] == value) {
      return false;
    }
    if (board[i][currentColumn] == value) {
      return false;
    }
    if (board[3 * (currentRow / 3) + (i / 3)]
             [3 * (currentColumn / 3) + (i % 3)] == value) {
      return false;
    }
  }
  return true;
}

bool solve(vector<vector<char>> &board) {
  int n = board.size();
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (board[i][j] == '.') {
        for (char value = '1'; value <= '9'; value++) {
          if (isSafe(value, board, i, j)) {
            board[i][j] = value;
            bool nextCells = solve(board);
            if (nextCells) {
              return true;
            } else {
              board[i][j] = '.';
            }
          }
        }
        return false;
      }
    }
  }
  return true;
}

int main() {
  vector<vector<char>> board{{'5', '3', '.', '.', '7', '.', '.', '.', '.'},
                             {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
                             {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
                             {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
                             {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
                             {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
                             {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
                             {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
                             {'.', '.', '.', '.', '8', '.', '.', '7', '9'}

  };
  solve(board);
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[0].size(); j++) {
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}