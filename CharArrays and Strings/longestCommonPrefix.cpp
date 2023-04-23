#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string> &strs) {
  string ans = "";
  int i = 0;
  while (true) {
    char currentCharacter = '0';
    for (string currentString : strs) {
      if (i >= currentString.length()) {
        currentCharacter = '0';
        break;
      }
      if (currentCharacter == '0') {
        currentCharacter = currentString[i];
      } else if (currentString[i] != currentCharacter) {
        currentCharacter = '0';
        break;
      }
    }
    if (currentCharacter == '0') {
      break;
    }
    ans.push_back(currentCharacter);
    i++;
  }
  return ans;
}

int main() {
  vector<string> strs{"flower", "flow", "flower"};
  cout << "Longest common prefix in strs : " << longestCommonPrefix(strs);
  return 0;
}