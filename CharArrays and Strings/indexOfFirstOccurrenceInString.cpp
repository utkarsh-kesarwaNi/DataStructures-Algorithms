#include <iostream>
using namespace std;

int indexOfNeedleInHaystack(string &haystack, string &needle) {
  int n = haystack.length(), m = needle.length();
  for (int i = 0; i <= n - m; i++) {
    for (int j = 0; j < m; j++) {
      if (needle[j] != haystack[i + j]) {
        break;
      }
      if (j == m - 1) {
        return i;
      }
    }
  }
  return -1;
}

int main() {
  string haystack = "comeOnLetsGo", needle = "ets";
  cout << indexOfNeedleInHaystack(haystack, needle);
  return 0;
}