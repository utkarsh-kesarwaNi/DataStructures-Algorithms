#include <iostream>
#include <vector>
using namespace std;

//Brute force
int searchInInfiniteArray(vector<int> &arr, int key) {
  int ans = -1;
  if (arr[0] == key) {
    return 0;
  }
  int i = 1;
  while (1) {
    if (arr[i] > key) {
      break;
    }
    if (arr[i] == key) {
      ans = i;
    }
    i++;
  }
  return ans;
}

//Using exponential search
int binarySearch(vector<int> &arr, int start, int end, int key) {
  int mid = start + (end - start) / 2;
  while (start <= end) {
    if (arr[mid] == key) {
      return mid;
    }
    if (key > arr[mid]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return -1;
}

int exponentialSearch(vector<int> &arr, int key) {
  int i = 0, j = 1;
  if (arr[0] == key) {
    return 0;
  }
  while (arr[j] < key) {
    i = j;
    j *= 2;
  }
  return binarySearch(arr, i, j, key);
}

int main() {
  vector<int> arr{12, 16, 22, 30, 35, 39, 42, 45, 48, 50, 53, 55, 56};
  int key;
  cout << "Enter key to be searched: ";
  cin >> key;
  cout << key << " found at index " << searchInInfiniteArray(arr, key);
  return 0;
}