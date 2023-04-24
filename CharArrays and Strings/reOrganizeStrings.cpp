#include <iostream>
#include <limits.h>
using namespace std;

string reorganizeString(string &s) {
  int hash[26] = {0};

  for (int i = 0; i < s.length(); i++) {
    hash[s[i] - 'a']++;
  }
  char mostFrequentCharacter;
  int highestFrequency = INT_MIN;

  for (int i = 0; i < 26; i++) {
    if (hash[i] > highestFrequency) {
      highestFrequency = hash[i];
      mostFrequentCharacter = i + 'a';
    }
  }
  int placingIndex = 0;
  while (placingIndex < s.length() && highestFrequency > 0) {
    s[placingIndex] = mostFrequentCharacter;
    highestFrequency--;
    placingIndex += 2;
  }
  if (highestFrequency != 0) {
    return "";
  }

  hash[mostFrequentCharacter - 'a'] = 0;
  for (int i = 0; i < 26; i++) {
    while (hash[i] > 0) {
      placingIndex = placingIndex >= s.length() ? 1 : placingIndex;
      s[placingIndex] = i + 'a';
      hash[i]--;
      placingIndex += 2;
    }
  }
  return s;
}

int main() {
  string s = "aabxxyxch";
  cout << reorganizeString(s);
  return 0;
}