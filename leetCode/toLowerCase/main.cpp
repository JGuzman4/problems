#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  string toLowerCase(string s) {
    string lower = "";
    for (int i = 0; i < s.length(); i++) {
      if (int(s[i]) > 64 && int(s[i]) < 91) {
        lower += int(s[i]) + 32;
      }
      else {
        lower += s[i];
      }
    }
    return lower;
  }
};

int main() {
  Solution sol;
  string lower = sol.toLowerCase("LOWER CASE");
  cout << lower << endl;
  return 0;
}
