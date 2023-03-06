#include <iostream>
using namespace std;

bool solve(int N) {
  for (int i = 2; i < N/2; i++) {
    if (N % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int N;
  cout << "Enter the number to be checked : ";
  cin >> N;
  solve(N) ? cout << N << " is prime" : cout << N << " is not a prime number";
  return 0;
}