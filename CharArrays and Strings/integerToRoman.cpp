#include <iostream>
#include <vector>
using namespace std;

string intToRoman(int &num) {
  vector<string> romanSymbols{"M",  "CM", "D",  "CD", "C",  "XC", "L",
                              "XL", "X",  "IX", "V",  "IV", "I"};
  vector<int> romanValues{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
  string ans = "";
  for (int i = 0; i < romanValues.size(); i++) {
    while (num >= romanValues[i]) {
      ans += romanSymbols[i];
      num -= romanValues[i];
    }
  }
  return ans;
}

int main() {
  int num;
  cin >> num;
  cout << "roman numeral of " << num << " is " << intToRoman(num);
  return 0;
}