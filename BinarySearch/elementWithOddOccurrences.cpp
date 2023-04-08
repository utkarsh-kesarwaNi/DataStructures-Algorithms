#include <iostream>
#include <vector>
using namespace std;

// TC=O(n)
int getOddOccurringElement(vector<int> &arr) {
  int ans = 0;
  for (int x : arr) {
    ans ^= x;
  }
  return ans;
}
// Using Binary search
int solve(vector<int> &arr) {
  int start = 0, end = arr.size() - 1;
  int mid = start + (end - start) / 2;
  while (start <= end) {
    if (start == end) {
      return start;
    }

    if ((mid & 1) == 0) {
      if (arr[mid] == arr[mid + 1]) {
        start = mid + 2;
      } else {
        end = mid;
      }
    } else {
      if (arr[mid] == arr[mid - 1]) {
        start = mid + 1;
      } else {
        end = mid - 1;
      }
    }
    mid = start + (end - start) / 2;
  }
  return -1;
}

int main() {
  vector<int> arr{3, 3, 7, 7, 10, 11, 11};
  getOddOccurringElement(arr) == 0
      ? cout << "No element appears odd number of times"
      : cout << getOddOccurringElement(arr) << " appears odd number of times\n";
  cout << "Index is " << solve(arr);
  return 0;
}