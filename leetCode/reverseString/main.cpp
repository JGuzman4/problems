#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  void reverseString(vector<char>& s) {
    int i = 0, j = s.size() - 1;
    while (i != j && i <= j) {
      char tmp = s[i];
      s[i] = s[j];
      s[j] = tmp;
      i += 1;
      j -= 1;
    }
  }
};

int main() {

  vector<char> s{'H','a','n','n','a','h'};
  for (int i = 0; i < s.size(); i++) {
      cout << s[i];
      if (i != s.size() - 1) {
          cout << " ";
      }
  }
  cout << "\n";

  Solution sol;
  sol.reverseString(s);

  for (int i = 0; i < s.size(); i++) {
      cout << s[i];
      if (i != s.size() - 1) {
          cout << " ";
      }
  }
  cout << "\n";
  return 0;
}
