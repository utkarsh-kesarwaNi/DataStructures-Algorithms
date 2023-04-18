#include <iostream>
using namespace std;

void reverseString(char name[], int length) {
  int start = 0, end = length - 1;
  while (start <= end) {
    swap(name[start++], name[end--]);
  }
}

int getLength(char name[]) {
  int i = 0;
  while (name[i] != '\0') {
    i++;
  }
  return i;
}
int main() {
  char name[100];
  cin.getline(name, 100);
  reverseString(name, getLength(name));
  cout << "String after reversal: " << name;
  return 0;
}