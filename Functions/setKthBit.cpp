#include <iostream>
using namespace std;

int solve(int N, int K) {
  int mask = 1;
  for (int i = 0; i < K; i++) {
    mask = mask << 1;
  }
  return N | mask;
}

int main() {
  int N, K;
  cin >> N >> K;
  cout << solve(N, K);
  return 0;
}