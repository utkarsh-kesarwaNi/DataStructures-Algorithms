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

int main() {
  string s = "India is my country. New Delhi is the capital of India";
  string part = "India";
  cout << removeSubstringOccurrence(s, part);
  return 0;
}