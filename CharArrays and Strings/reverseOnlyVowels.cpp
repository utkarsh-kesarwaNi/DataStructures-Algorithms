#include <iostream>
using namespace std;
bool isvowel(char c) {
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
          c == 'A' || c == 'I' || c == 'O' || c == 'E' || c == 'U');
}
string reverseVowels(string s) {
  int st = 0;
  int e = s.size();
  while (st < e) {
    if (isvowel(s[st]) && isvowel(s[e])) {
      swap(s[st], s[e]);
      st++;
      e--;
    } else if (!isvowel(s[st])) {
      st++;
    } else {
      e--;
    }
  }
  return s;
}

int main() {
  string s = "hello";
  cout << reverseVowels(s);
  return 0;
}