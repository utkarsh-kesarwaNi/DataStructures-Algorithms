// Given a string s, return the number of palindromic substrings in it. A string is a palindrome when it reads the same backward as forward. A substring is a contiguous sequence of characters within the string.
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

bool checkPalindrome(string &s) {
  int start = 0, end = s.length() - 1;
  while (start <= end) {
    if (s[start] != s[end]) {
      return false;
    }
    start++, end--;
  }
  return true;
}

// Brute force
int countSubstring(string &s) {
  int count = 0;
  for (int i = 0; i < s.length(); i++) {
    string sub = "";
    for (int j = i; j < s.length(); j++) {
      sub += s[j];
      if (checkPalindrome(sub)) {
        count++;
      }
    }
  }
  return count;
}

int expandAroundIndex(string s, int left, int right) {
  int count = 0;
  while (left >= 0 && right < s.length() && s[left] == s[right]) {
    count++;
    left--, right++;
  }
  return count;
}
// Optimal
int countSubstrings(string s) {
  int totalCount = 0;
  int n = s.length();

  for (int i = 0; i < n; i++) {
    int oddCase = expandAroundIndex(s, i, i);
    totalCount += oddCase;
    int evenCase = expandAroundIndex(s, i, i + 1);
    totalCount += evenCase;
  }
  return totalCount;
}

int main() {
  string s = "abc";
  cout << countSubstrings(s);
  return 0;
}