#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int newX, int newY, vector<vector<int>> &maze, int rows,
            int columns, vector<vector<bool>> &visited) {
  if (((newX >= 0 && newX < rows) && (newY >= 0 && newY < columns)) &&
      (maze[newX][newY] == 1) && (visited[newX][newY] == false)) {
    return true;
  } else {
    return false;
  }
}

void findAllPaths(vector<vector<int>> &maze, int rows, int columns,
                  int currentX, int currentY, vector<vector<bool>> &visited,
                  vector<string> &paths, string output) {
  if (currentX == rows - 1 && currentY == columns - 1) {
    paths.push_back(output);
    return;
  }
  // D
  int newX = currentX + 1, newY = currentY;
  if (isSafe(newX, newY, maze, rows, columns, visited)) {
    visited[newX][newY] = true;
    findAllPaths(maze, rows, columns, newX, newY, visited, paths, output + 'D');
    visited[newX][newY] = false;
  }

  // L
  newX = currentX, newY = currentY - 1;
  if (isSafe(newX, newY, maze, rows, columns, visited)) {
    visited[newX][newY] = true;
    findAllPaths(maze, rows, columns, newX, newY, visited, paths, output + 'L');
    visited[newX][newY] = false;
  }

  // R
  newX = currentX, newY = currentY + 1;
  if (isSafe(newX, newY, maze, rows, columns, visited)) {
    visited[newX][newY] = true;
    findAllPaths(maze, rows, columns, newX, newY, visited, paths, output + 'R');
    visited[newX][newY] = false;
  }
  // U
  newX = currentX - 1, newY = currentY;
  if (isSafe(newX, newY, maze, rows, columns, visited)) {
    visited[newX][newY] = true;
    findAllPaths(maze, rows, columns, newX, newY, visited, paths, output + 'U');
    visited[newX][newY] = false;
  }
}

int main() {
  vector<vector<int>> maze{
      {0, 0, 1, 0}, {1, 1, 0, 1}, {0, 1, 1, 0}, {0, 1, 1, 0}, {0, 1, 1, 0}};
  // if (maze[0][0] == 0) {
  //   cout << "No path possible";
  // }

  int rows = maze.size();
  int columns = maze[0].size();
  vector<vector<bool>> visited(rows, vector<bool>(columns, false));
  vector<string> paths;
  string output = "";

  int currentX = 0, currentY = 0;
  findAllPaths(maze, rows, columns, currentX, currentY, visited, paths, output);

  if (paths.size() == 0) {
    cout << "No path possible";
  }
  for (auto x : paths) {
    cout << x << " ";
  }
  return 0;
}