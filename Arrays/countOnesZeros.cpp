#include <iostream>
using namespace std;

void countOnesAndZeros(int arr[], int size) {
  int numberOfZero = 0, numberOfOne = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i]) {
      numberOfOne++;
    }
    numberOfZero = size - numberOfOne;
  }
  cout << "Number of 1: " << numberOfOne << endl;
  cout << "Number of 0: " << numberOfZero << endl;
}

int main() {
  int arr[] = {1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 1};
  countOnesAndZeros(arr, 15);
  return 0;
}