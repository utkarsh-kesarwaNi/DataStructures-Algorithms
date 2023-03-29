#include <iostream>
#include <vector>
using namespace std;

int firstRepeatingElement(vector<int> &v) {
  for (int i = 0; i < v.size(); i++) {
    for (int j = i + 1; j < v.size(); j++) {
      if (v[i] == v[j]) {
        return i + 1;
      }
    }
  }
  return -1;
}

int main() {
  vector<int> v = {1, 5, 3, 4, 3, 5, 6};
  cout << "First repeating element is at index(1-based) : "
       << firstRepeatingElement(v);
  return 0;
}