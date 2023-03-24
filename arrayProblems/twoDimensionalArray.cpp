#include <iostream>
using namespace std;

void rowWiseAccess(int arr[3][3]) {
  cout << "Displaying values row wise : " << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << arr[i][j] << "\t";
    }
    cout << endl;
  }
}

void columnWiseAccess(int arr[3][3]) {
  cout << "Displaying values column wise : " << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << arr[j][i] << "\t";
    }
    cout << endl;
  }
}

int main() {
  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  rowWiseAccess(arr);
  columnWiseAccess(arr);
  return 0;
}