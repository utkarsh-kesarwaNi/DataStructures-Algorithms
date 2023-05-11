#include <iostream>
using namespace std;

int fibonacci(int n) {
  if (n == 1)
    return 0;
  if (n == 2)
    return 1;

  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  unsigned int n;
  cin >> n;
  cout << n << "th term in fibonacci series is " << fibonacci(n);
  return 0;
}