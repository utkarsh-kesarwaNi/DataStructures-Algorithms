#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n) {
  if (n <= 1)
    return 0;
  vector<bool> primes(n, true);
  int count = 0;
  for (int i = 2; i < n; i++) {
    if (primes[i]) {
      count++;

      int j = 2 * i;
      while (j < n) {
        primes[j] = false;
        j += i;
      }
    }
  }
  return count;
}

int main() {
  int n;
  cin >> n;
  cout << countPrimes(n);
  return 0;
}