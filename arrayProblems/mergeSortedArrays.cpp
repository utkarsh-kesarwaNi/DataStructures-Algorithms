#include <iostream>
#include <vector>
using namespace std;

void mergeSortedArrays(int nums1[], int nums2[], int n, int m, int result[]) {
  int i = 0, j = 0, k = 0;
  while (i < n && j < m) {
    if (nums1[i] < nums2[j]) {
      result[k++] = nums1[i++];
    } else {
      result[k++] = nums2[j++];
    }
  }
  while (i < n) {
    result[k++] = nums1[i++];
  }
  while (j < m) {
    result[k++] = nums2[j++];
  }
}

int main() {
  int nums1[] = {2, 90, 99, 100, 231, 768, 990};
  int nums2[] = {3, 4, 55, 121, 144, 1331, 13309};
  int nums1Size = sizeof(nums1) / sizeof(int);
  int nums2Size = sizeof(nums2) / sizeof(int);
  int result[nums1Size + nums2Size];
  mergeSortedArrays(nums1, nums2, nums1Size, nums2Size, result);

  for (int i = 0; i < nums1Size + nums2Size; i++)
    cout << result[i] << " ";
  return 0;
}