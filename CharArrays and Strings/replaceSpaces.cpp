#include <iostream>
using namespace std;

int getLength(char name[]) {
  int i = 0;
  while (name[i] != '\0') {
    i++;
  }
  return i;
}

void replaceSpaces(char name[]) {
  for (int i = 0; i < getLength(name); i++) {
    if (name[i] == ' ') {
      name[i] = '@';
    }
  }
}
int main() {
  char name[100];
  cin.getline(name, 100);
  replaceSpaces(name);
  cout << name;
  return 0;
}