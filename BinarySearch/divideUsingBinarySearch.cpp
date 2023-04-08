#include <iostream>
#include <vector>
using namespace std;

int divideUsingBinarySearch(int dividend, int divisor) {
  int start = 0, end = abs(dividend), ans;
  int mid = start + (end - start) / 2;
  while (start <= end) {
    if (abs(mid * divisor) == abs(dividend)) {
      ans = mid;
      break;
    }
    if (abs(mid * divisor) > abs(dividend)) {
      end = mid - 1;
    } else {
      ans = mid;
      start = mid + 1;
    }
    mid = start + (end - start) / 2;
  }
  if ((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0)) {
    return ans;
  } else {
    return -ans;
  }
}

int main() {
  int dividend, divisor;
  cout << "Enter dividend and divisor: ";
  cin >> dividend >> divisor;
  cout << "Quotient is " << divideUsingBinarySearch(dividend, divisor);
  return 0;
}