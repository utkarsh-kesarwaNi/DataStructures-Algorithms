//You are given 2 arrays.
//You need to print union of these arrays assuming there are no duplicates.
#include <iostream>
#include <vector>
using namespace std;

void unionOfArrays(vector<int> v1, vector<int> v2) {
  vector<int> result;
  for (int element : v1) {
    result.push_back(element);
  }
  for (int element : v2) {
    result.push_back(element);
  }
  for (int element : result) {
    cout << element << "\t";
  }
}

int main() {
  int M, N;
  cout << "Enter size of v1 and v2 : ";
  cin >> M >> N;
  vector<int> v1(M), v2(N);
  cout << "Enter elements for v1 : ";
  for (int i = 0; i < v1.size(); i++) {
    cin >> v1[i];
  }
  cout << "Enter elements for v2 : ";
  for (int i = 0; i < v2.size(); i++) {
    cin >> v2[i];
  }
  unionOfArrays(v1, v2);
  return 0;
}