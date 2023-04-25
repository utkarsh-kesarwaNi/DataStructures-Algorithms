#include <array>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

array<int, 256> createHash(string &s) {
  array<int, 256> hash = {0};
  for (int i = 0; i < s.length(); i++) {
    hash[s[i]]++;
  }
  return hash;
}

vector<vector<string>> groupAnagram(vector<string> strs) {
  map<array<int, 256>, vector<string>> mp;
  for (string str : strs) {
    mp[createHash(str)].push_back(str);
  }
  vector<vector<string>> ans;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    ans.push_back(it->second);
  }
  return ans;
}

int main() {
  vector<string> strs{"eat", "tea", "tan",     "ate",    "nat",
                      "bat", "tab", "anagram", "nagaram"};
  vector<vector<string>> ans = groupAnagram(strs);
  for (auto it : ans)
    for (auto s : it)
      cout << s << "\t";
  return 0;
}