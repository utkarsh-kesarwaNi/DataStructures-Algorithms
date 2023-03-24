#include <iostream>
using namespace std;

bool linearSearch1DArray(int arr[], int size, int key) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == key) {
      return true;
    }
  }
  return false;
}

bool linearSearch2DArray(int brr[][3], int rows, int columns, int key) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      if (brr[i][j] == key) {
        return true;
      }
    }
  }
  return false;
}

int main() {
  int arr[] = {10, 23, 2, 43, 89, 90}, brr[3][3] = {{0, 9, 8}, {1, 2, 3}, {4, 6, 5}}, key;
  int rows = 3, columns = 3;
  cout << "Enter the element to be searched: ";
  cin >> key;
  
  linearSearch1DArray(arr, 6, key)
      ? cout << key << " is present in arr" << endl
      : cout << key << " is not present in arr" << endl;

  linearSearch2DArray(brr, rows, columns, key)
      ? cout << key << " is present in brr" << endl
      : cout << key << " is not present in brr" << endl;
  return 0;
}