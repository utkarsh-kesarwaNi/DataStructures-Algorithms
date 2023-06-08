#include <iostream>
using namespace std;

void printPermutations(string &str, int i) {
  if (i >= str.length()) {
    cout << str << " ";
    return;
  }
  for (int j = i; j < str.length(); j++) {
    swap(str[i], str[j]);
    printPermutations(str, i + 1);

    //Since str is passed by reference....we need to recreate original string using any method(store in some temp variable etc)
    swap(str[i], str[j]);
  }
}

int main() {
  string str = "abXY";
  int i = 0;
  printPermutations(str, i);
  return 0;
}