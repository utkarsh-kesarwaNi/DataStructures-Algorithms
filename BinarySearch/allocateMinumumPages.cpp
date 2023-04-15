#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

bool isPossibleSolution(vector<int> &A, int N, int M, int mid) {
  int pageSum = 0, studentCount = 1;
  for (int i = 0; i < N; i++) {
    if (A[i] > mid) {
      return false;
    }
    if (pageSum + A[i] > mid) {
      studentCount++;
      pageSum = A[i];
      if (studentCount > M) {
        return false;
      }
    } else {
      pageSum += A[i];
    }
  }
  return true;
}

int allocateMinimumPages(vector<int> &A, int N, int M) {
  int ans = -1;
  if (M > N) {
    return -1;
  }
  int start = 0, end = accumulate(A.begin(), A.end(), 0);
  int mid = start + (end - start) / 2;
  while (start <= end) {
    if (isPossibleSolution(A, N, M, mid)) {
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
  vector<int> A{34, 67, 12, 90};
  int N = A.size();
  int M = 2;
  cout << allocateMinimumPages(A, N, M);
  return 0;
}