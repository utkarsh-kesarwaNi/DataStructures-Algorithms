#include <iostream>
using namespace std;

void lastOccurrence(string &s, char ch, int currentIndex, int &ans) {
  if (currentIndex >= s.length()) {
    return;
  }
  if (s[currentIndex] == ch) {
    ans = currentIndex;
  }
  lastOccurrence(s, ch, currentIndex + 1, ans);
}

int main() {
  string s = "Mississippi";
  char ch;
  cin >> ch;
  int currentIndex = 0, ans = -1;
  lastOccurrence(s, ch, currentIndex, ans);
  cout << ans;
  return 0;
}