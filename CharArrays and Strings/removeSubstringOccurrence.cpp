#include <iostream>
#include <string.h>
using namespace std;

string removeSubstringOccurrence(string &s, string &part) {
  int pos = s.find(part);
  while (pos != string::npos) {
    s.erase(pos, part.length());
    pos = s.find(part);
  }
  return s;
}

// Recursive solution
void removeOccurrences(string &s, string &part) {
  int position = s.find(part);
  if (position == string::npos) {
    return;
  }
  string left = s.substr(0, position);
  string right = s.substr(position + part.length(), s.length());
  s = left + right;

  removeOccurrences(s, part);
}

int main() {
  string s = "India is my country. New Delhi is the capital of India";
  string part = "India";
  cout << removeSubstringOccurrence(s, part);
  return 0;
}