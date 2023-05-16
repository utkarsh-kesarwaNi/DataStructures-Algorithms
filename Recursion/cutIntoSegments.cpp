#include <iostream>
#include <limits.h>
using namespace std;

int solve(int n, int x, int y, int z) {
  if (n == 0) {
    return 0;
  }
  if (n < 0) {
    return INT_MIN;
  }

  int segmentX = solve(n - x, x, y, z) + 1;
  int segmentY = solve(n - y, x, y, z) + 1;
  int segmentZ = solve(n - z, x, y, z) + 1;

  return max(segmentX, max(segmentY, segmentZ));
}

int main() {
  int n = 7;
  int x = 5, y = 2, z = 2;
  solve(n, x, y, z) < 0 ? cout << 0 : cout << solve(n, x, y, z);
  return 0;
}