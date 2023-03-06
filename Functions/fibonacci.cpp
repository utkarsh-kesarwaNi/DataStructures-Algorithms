#include <iostream>
using namespace std;

void solve(unsigned int N) {
  unsigned int firstTerm = 0, secondTerm = 1, nextTerm;
  cout << firstTerm << " " << secondTerm << " ";
  for (int i = 0; i < N - 2; i++) {
    nextTerm = firstTerm + secondTerm;

    cout << nextTerm << " ";
    firstTerm = secondTerm;
    secondTerm = nextTerm;
  }
}

int main() {
  unsigned int N;
  cout << "Enter the number of terms : ";
  cin >> N;
  solve(N);
  return 0;
}