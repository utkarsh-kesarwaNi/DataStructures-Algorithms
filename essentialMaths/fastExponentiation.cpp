#include <iostream>
using namespace std;

int fastExponent(int a, int b) {
  int ans = 1;
  while (b > 0) {
    if (b & 1) {
      ans *= a;
    }
    a *= a;
    b >>= 1;
  }
  return ans;
}

int main() {
  int A, B;
  cin >> A >> B;
  cout << fastExponent(A, B);
  return 0;
}