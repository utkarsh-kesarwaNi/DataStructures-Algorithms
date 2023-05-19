#include <iostream>
using namespace std;

bool checkPalindrome(string &s, int start, int end) {
  if (start > end) {
    return true;
  }
  if (s[start] != s[end]) {
    return false;
  }
  return checkPalindrome(s, start + 1, end - 1);
}

int main() {
  string s;
  cin >> s;
  int start = 0, end = s.length() - 1;
  checkPalindrome(s, start, end) ? cout << s << " is palindrome"
                                 : cout << s << " is not a palindrome";
  return 0;
}