#include <iostream>
#include <vector>
using namespace std;

void sort10(vector<int> &arr) {
  int start = 0, end = arr.size() - 1, i = 0;
  while (i != end) {
    if (arr[i] == 0) {
      swap(arr[i], arr[start]);
      start++;
      i++;
    } else {
      swap(arr[i], arr[end]);
      end--;
    }
  }
}

int main() {
  vector<int> arr{0, 0, 1, 0, 1, 1, 1, 1, 0, 0, 1};

  sort10(arr);

  for (int element : arr) {
    cout << element << "\t";
  }
  return 0;
}