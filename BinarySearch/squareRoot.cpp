#include <iostream>
using namespace std;

unsigned int squareRoot(unsigned int N) {
  unsigned int start = 0, end = N / 2, ans = 0;
  unsigned int mid = start + (end - start) / 2;
  while (start <= end) {
    if (mid * mid == N) {
      return mid;
    }
    if (mid * mid > N) {
      end = mid - 1;
    } else {
      ans = mid;
      start = mid + 1;
    }
    mid = start + (end - start) / 2;
  }
  return ans;
}

int main() {
  unsigned int N, precisionDigits;
  cout << "Enter any number: ";
  cin >> N;
  cout << "Enter the number of digits you want after decimal: ";
  cin >> precisionDigits;
  double factor = 1;
  double ans = squareRoot(N);
  for (int i = 0; i < precisionDigits; i++) {
    factor /= 10;
    for (double j = ans; j * j <= N; j = j + factor) {
      ans = j;
    }
  }
  cout << "Square root is " << ans;
  return 0;
}