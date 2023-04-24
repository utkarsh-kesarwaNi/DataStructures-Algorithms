#include <iostream>
using namespace std;

bool isIsomorphic(string &s, string &t) {
  int hashForS[256] = {0};
  bool hashForT[256] = {0};
  for (int i = 0; i < s.length(); i++) {
    if (hashForS[s[i]] == 0 && hashForT[t[i]] == false) {
      hashForS[s[i]] = t[i];
      hashForT[t[i]] = 1;
    }
  }
  for (int i = 0; i < s.length(); i++) {
    if ((char)hashForS[s[i]] != t[i]) {
      return false;
    }
  }
  return true;
}

int main() {
  string s = "title", t = "paper";
  isIsomorphic(s, t) ? cout << s << " & " << t << " are isomorphic"
                     : cout << s << " & " << t << " are not isomorphic";
  return 0;
}