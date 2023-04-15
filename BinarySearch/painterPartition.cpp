#include <iostream>
#include <vector>
using namespace std;
bool isPossibleSolution(vector<int> &A, int n, int k, long long mid) {
  long long boardLength = 0;
  int painterCount = 1;
  for (int i = 0; i < n; i++) {
    if (A[i] > mid) {
      return false;
    }
    if (boardLength + A[i] > mid) {
      painterCount++;
      boardLength = A[i];
      if (painterCount > k) {
        return false;
      }
    } else {
      boardLength += A[i];
    }
  }
  return true;
}
long long minTime(vector<int> &A, int n, int k) {
  long long ans;
  long long start = 0, end = 0;
  for (int i = 0; i < n; i++) {
    end += A[i];
  }
  long long mid = start + (end - start) / 2;
  while (start <= end) {
    if (isPossibleSolution(A, n, k, mid)) {
      ans = mid;
      end = mid - 1;
    } else {
      start = mid + 1;
    }
    mid = start + (end - start) / 2;
  }
  return ans;
}
int main() {
  vector<int> A{5, 10, 30, 20, 15};
  int N = A.size();
  int M = 3;
  cout << minTime(A, N, M);
  return 0;
}