#include <iostream>
#include <vector>
using namespace std;

string convert(string s, int numRows) {
  if (numRows == 1) {
    return s;
  }
  int i = 0, row = 0;
  bool direction = true;
  vector<string> result(numRows);
  while (true) {
    if (direction) {
      while (row < numRows && i < s.length()) {
        result[row++].push_back(s[i++]);
      }
      row = row - 2;
    } else {
      while (row >= 0 && i < s.length()) {
        result[row--].push_back(s[i++]);
      }
      row = 1;
    }
    if (i >= s.length()) {
      break;
    }
    direction = !direction;
  }
  string ans = "";
  for (string x : result) {
    ans += x;
  }
  return ans;
}

int main() {
  string s = "kesUDaDa";
  cout << convert(s, 4);
  return 0;
}