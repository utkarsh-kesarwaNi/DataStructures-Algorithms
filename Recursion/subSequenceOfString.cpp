#include <iostream>
using namespace std;

// Recursive solution
void printSubsequences(string &s, string ans, int currentIndex) {
  if (currentIndex >= s.length()) {
    cout << ans << "\n";
    return;
  }
  printSubsequences(s, ans, currentIndex + 1);
  ans.push_back(s[currentIndex]);
  printSubsequences(s, ans, currentIndex + 1);
}

int main() {
  string s = "abc";
  string ans = "";
  int currentIndex = 0;
  printSubsequences(s, ans, currentIndex);
  return 0;
}