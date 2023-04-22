#include <iostream>
#include <stack>
using namespace std;

string reverseOnlyLetters(string S) {
  int l = 0;
  int r = S.size();
  while (l < r) {
    if (!isalpha(S[l])) {
      l++;
    } else if (!isalpha(S[r - 1])) {
      r--;
    } else {
      swap(S[l], S[r - 1]);
      l++;
      r--;
    }
  }
  return S;
}
int main() {
  string s = "a!@b-cdemx";
  cout << reverseOnlyLetters(s);
  return 0;
}