#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

void getSubstrings(string &s) {
  for (int i = 0; i < s.length(); i++) {
    string ans;
    for (int j = i; j < s.length(); j++) {
      ans += s[j];
      cout << ans << endl;
    }
  }
}

int main() {
  string s = "abc";
  getSubstrings(s);
  return 0;
}