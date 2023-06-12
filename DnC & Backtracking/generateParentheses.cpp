#include <iostream>
#include <vector>
using namespace std;

void solve(vector<string> &ans, int n, int openingBracketCount,
           int closingBracketCount, string output) {
  if (openingBracketCount == 0 && closingBracketCount == 0) {
    ans.push_back(output);
    return;
  }
  if (openingBracketCount > 0) {
    output.push_back('(');
    solve(ans, n, openingBracketCount - 1, closingBracketCount, output);
    output.pop_back();
  }
  if (openingBracketCount < closingBracketCount) {
    output.push_back(')');
    solve(ans, n, openingBracketCount, closingBracketCount - 1, output);
    output.pop_back();
  }
}

vector<string> generateParenthesis(int n) {
  vector<string> ans;
  int openingBracketCount = n, closingBracketCount = n;
  string output = "";
  solve(ans, n, openingBracketCount, closingBracketCount, output);
  return ans;
}

int main() {
  int n;
  cin >> n;
  for (auto x : generateParenthesis(n)) {
    cout << x << endl;
  }
  return 0;
}