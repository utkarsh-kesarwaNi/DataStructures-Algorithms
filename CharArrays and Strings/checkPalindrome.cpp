#include <iostream>
#include <string.h>
using namespace std;

bool isPalindrome(char name[]) {
  int start = 0, end = strlen(name) - 1;
  while (start <= end) {
    if (name[start] != name[end]) {
      return false;
    } else {
      start++, end--;
    }
  }
  return true;
}

int main() {
  char name[100];
  cin.getline(name, 100);
  isPalindrome(name) ? cout << name << " is a palindrome"
                     : cout << name << " is not a palindrome";
  return 0;
}