#include <iostream>
using namespace std;

bool isPalindrome(string &s, int start, int end) {
  while (start < end) {
    if (s[start] != s[end]) {
      return false;
    }
    start++, end--;
  }
  return true;
}

string longestPalindromicSubstring(string &s) {
  string ans = "";
  for (int i = 0; i < s.length(); i++) {
    for (int j = i; j < s.length(); j++) {
      if (isPalindrome(s, i, j)) {
        string t = s.substr(i, j - i + 1);
        ans = t.length() > ans.length() ? t : ans;
      }
    }
  }
  return ans;
}

int main() {
  string s = "ababadabcddcbfa";
  cout << longestPalindromicSubstring(s);
  return 0;
}