#include <iostream>
using namespace std;

long long int solve(long long int N) {
  long long int product = 1;
  while (N) {
    product *= N;
    N--;
  }
  return product;
}

int main() {
  long long int N;
  cout << "Enter any positive number : ";
  cin >> N;
  cout << "Factorial of " << N << " is : " << solve(N);
}