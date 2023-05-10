#include <iostream>
using namespace std;

// Iteratively
int gcd(int A, int B) {
  if (A == 0)
    return B;
  if (B == 0)
    return A;
  while (A > 0 && B > 0) {
    if (A > B) {
      A = A - B;
    } else {
      B = B - A;
    }
  }
  return A == 0 ? B : A;
}

int main() {
  int A, B;
  cin >> A >> B;
  cout << "HCF of " << A << " and " << B << " is " << gcd(A, B) << endl;
  cout << "LCM of " << A << " and " << B << " is " << (A * B) / gcd(A, B) << endl;
  return 0;
}