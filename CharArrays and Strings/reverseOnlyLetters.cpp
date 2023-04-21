#include <iostream>
#include <stack>
using namespace std;

string reverseOnlyLetters(string s) {
  stack<int> st;
  for (int i = 0; i < s.size(); i++) {
    if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
      st.push(s[i]);
    }
  }

  for (int i = 0; i < s.size(); i++) {
    if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
      s[i] = st.top();
      st.pop();
    }
  }
  return s;
}
int main() {
  string s = "a!@b-cdemx";
  cout << reverseOnlyLetters(s);
  return 0;
}