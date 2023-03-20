// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.
#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> v) {
  int x = 0;
  for (int element : v) {
    x ^= element;
  }
  return x;
}

int main() {
  int N;
  cout << "Enter the number of elements: ";
  cin >> N;
  vector<int> v(N);
  for (int i = 0; i < v.size(); i++) {
    cin >> v[i];
  }
  cout << findUnique(v);
  return 0;
}