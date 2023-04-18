#include <iostream>
#include <string.h>
using namespace std;

void convertToUpperCase(char name[]) {
  for (int i = 0; i < strlen(name); i++) {
    if (name[i] != ' ') {
      name[i] = name[i] - 'a' + 'A';
    }
  }
}

void convertToLowerCase(char name[]) {
  for (int i = 0; i < strlen(name); i++) {
    if (name[i] != ' ') {
      name[i] = name[i] - 'A' + 'a';
    }
  }
}

int main() {
  char name[100];
  cin.getline(name, 100);
  convertToUpperCase(name);
  cout << name;
  return 0;
}