#include <iostream>
#include <limits.h>
#include <math.h>
using namespace std;

int solve(int n) {
  if (n == 0) {
    return 1;
  }
  if (n < 0) {
    return 0;
  }
  int ans = INT_MAX;
  int i = 1;
  int end = sqrt(n);
  while (i <= end) {
    int square = i * i;
    int numberOfSquares = 1 + solve(n - square);
    if (numberOfSquares < ans) {
      ans = numberOfSquares;
    }
    ++i;
  }
  return ans;
}

int numSquares(int n) { return solve(n) - 1; }

int main() {
  int n;
  cin >> n;
  cout << numSquares(n);
  return 0;
}