#include <iostream>
using namespace std;

int factorial(int n) {
  if (n == 1)
    return 1;

  int smallerProblem = factorial(n - 1);
  return n * smallerProblem;
}

int main() {
  unsigned int n;
  cin >> n;
  cout << factorial(n);
  return 0;
}