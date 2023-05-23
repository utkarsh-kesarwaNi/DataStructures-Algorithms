#include <iostream>
#include <vector>

using namespace std;
bool wildCardMatcher(string &s, int si, string &p, int pi) {
  if (si == s.length() && pi == p.length()) {
    return true;
  }
  if (si == s.length() && pi < p.length()) {
    while (pi < p.length()) {
      if (p[pi] != '*')
        return false;
      pi++;
    }
    return true;
  }
  if (s[si] == p[pi] || p[pi] == '?') {
    return wildCardMatcher(s, si + 1, p, pi + 1);
  }

  if (p[pi] == '*') {
    bool caseEmpty = wildCardMatcher(s, si, p, pi + 1);
    bool caseConsume = wildCardMatcher(s, si + 1, p, pi);

    return caseEmpty || caseConsume;
  }
  return false;
}
bool isMatching(string s, string p) {
  int si = 0, pi = 0;
  return wildCardMatcher(s, si, p, pi);
}
int main() {
  string s = "abscdefg", p = "abfg";
  isMatching(s, p) ? cout << "Matching" : cout << "Not matching";
  return 0;
}