#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool cmp(string a, string b) { return (a + b) > (b + a); }

string largestNumber(vector<int> &nums) {
  vector<string> s;
  string ans = "";
  for (int x : nums) {
    s.push_back(to_string(x));
  }
  sort(s.begin(), s.end(), cmp);
  for (string str : s) {
    ans += str;
  }
  return ans;
}

int main() {
  vector<int> nums{3, 30, 34, 5, 9};
  cout << largestNumber(nums);
  return 0;
}