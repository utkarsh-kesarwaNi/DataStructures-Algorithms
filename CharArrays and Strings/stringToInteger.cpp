#include <iostream>
#include <limits.h>
using namespace std;

int myAtoi(string s) {
  int i = 0;
  long long rev = 0;
  int sign = 1;
  while (i < s.length() && s[i] == ' ') {
    i++;
  }
  if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
    sign = (s[i++] == '-') ? -1 : 1;
  }
  if (i < s.length() && !(s[i] >= '0' && s[i] <= '9')) {
    return 0;
  }
  while (i < s.length() && s[i] - '0' >= 0 && s[i] - '0' <= 9) {
    rev = rev * 10 + (s[i++] - '0');
    if (rev * sign > INT_MAX) {
      return INT_MAX;
    } else if (rev * sign < INT_MIN) {
      return INT_MIN;
    }
  }
  if (rev == 0) {
    return 0;
  }
  return (int)(rev * sign);
}
int main() { 
  string s="   -123HelloSillyQuestion";
  cout<<myAtoi(s);
  return 0; }