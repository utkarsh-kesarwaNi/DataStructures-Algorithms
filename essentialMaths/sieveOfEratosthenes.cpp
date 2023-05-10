#include <iostream>
#include <vector>
using namespace std;

// Optimized
vector<bool> sieveOfEratosthenes(int n) {
  vector<bool> primes(n + 1, true);
  primes[0] = primes[1] = false;
  for (int i = 2; i * i <= n; i++) {
    if (primes[i]) {
      int j = i * i;
      while (j < n) {
        primes[j] = false;
        j += i;
      }
    }
  }
  return primes;
}

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
  vector<bool> sieve = sieveOfEratosthenes(n);
  for (int i = 0; i < n; i++) {
    if (sieve[i]) {
      cout << i << "\t";
    }
  }
  return 0;
}