// Given two strings s and t, return true if t is an anagram of s, and false otherwise. An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

#include <algorithm>
#include <iostream>
using namespace std;

// Brute force
bool isValidAnagram(string &s, string &t) {
  sort(s.begin(), s.end());
  sort(t.begin(), t.end());
  return s == t;
}

// Counting occurrences
bool isAnagram(string &s, string &t) {
  if (s.length() != t.length())
    return false;

  int frequency[256] = {0};
  for (int i = 0; i < s.length(); i++) {
    frequency[s[i]]++;
  }
  for (int i = 0; i < t.length(); i++) {
    frequency[t[i]]--;
  }
  for (int i = 0; i < 256; i++) {
    if (frequency[i] != 0) {
      return false;
    }
  }
  return true;
}

int main() {
  string s = "anagram", t = "nagaram";
  isAnagram(s, t) ? cout << "s and t are valid anagrams"
                  : cout << "s and t are not valid anagrams";
  return 0;
}