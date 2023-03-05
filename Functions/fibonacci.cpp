#include <iostream>
using namespace std;

void solve(int N) {
  int firstTerm = 0, secondTerm = 1, nextTerm;
  cout << firstTerm << " " << secondTerm << " ";
  for (int i = 0; i < N; i++) {
    nextTerm = firstTerm + secondTerm;

    cout << nextTerm << " ";
    firstTerm = secondTerm;
    secondTerm = nextTerm;
  }
}

int main() {
  int N;
  cout << "Enter the number of terms :";
  cin >> N;
  solve(N);
  return 0;
}