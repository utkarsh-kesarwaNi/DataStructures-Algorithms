#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == key) {
      return true;
    }
  }
  return false;
}

int main() {
  int arr[] = {10, 23, 22, 43, 89, 90}, key;
  cout << "Enter the element to be searched: ";
  cin >> key;
  linearSearch(arr, 6, key) ? cout << key << " is present" << endl
                               : cout << key << " is not present" << endl;
  return 0;
}