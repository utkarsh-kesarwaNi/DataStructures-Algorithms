// Given a string s, return true if the s can be palindrome after deleting at most one character from it.
#include <iostream>
#include <string.h>
using namespace std;

bool checkPalindrome(string &s, int start, int end) {
  while (start <= end) {
    if (s[start] != s[end]) {
      return false;
    }
    start++, end--;
  }
  return true;
}

bool validPalindrome(string s) {
  int start = 0, end = s.length() - 1;
  while (start <= end) {
    if (s[start] != s[end]) {
      return checkPalindrome(s, start + 1, end) ||
             checkPalindrome(s, start, end - 1);
    } else {
      start++, end--;
    }
  }
  return true;
}

int main() {
  string s = "racecars";
  cout << validPalindrome(s);
  return 0;
}