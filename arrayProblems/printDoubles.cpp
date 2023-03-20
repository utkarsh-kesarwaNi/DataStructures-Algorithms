//Print double of each element in a given array
#include <iostream>
using namespace std;

int main() {
  int arr[100], n;
  cout << "How many elements you want to add in array?" << endl;
  cin >> n;
  cout << "Start entering array elements: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << "Resultant elements: ";
  for (int i = 0; i < n; i++) {
    cout << 2 * arr[i] << " ";
  }
  return 0;
}