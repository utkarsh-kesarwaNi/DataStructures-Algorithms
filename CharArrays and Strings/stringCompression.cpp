#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int compress(vector<char> &chars) {
  int i = 0, j = 0;
  int n = chars.size();
  if (n == 1)
    return 1;
  while (i < n) {
    int count = 1;
    while (i < n - 1 && chars[i] == chars[i + 1]) {
      i++;
      count++;
    }
    chars[j++] = chars[i++];
    if (count > 1) {
      string s = to_string(count);
      for (auto c : s)
        chars[j++] = c;
    }
  }
  return j;
}

int main() {
  vector<char> chars{'a', 'a', 'b', 'b', 'c', 'c', 'c'};
  cout << compress(chars);
  return 0;
}