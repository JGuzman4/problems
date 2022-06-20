#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  bool isPalindrome(string s) {
    string lower = "";
    for (int i = 0; i < s.length(); i++) {
      if (int(s[i]) > 64 && int(s[i]) < 91) {
        lower += int(s[i]) + 32;
      }
      else if (int(s[i]) > 47 && int(s[i]) < 58) {
        lower += s[i];
      }
      else if (int(s[i]) > 96 && int(s[i]) < 123) {
        lower += s[i];
      }
    }
    string reverse = lower;
    int i = 0, j = reverse.size() - 1;
    while (i != j && i <= j) {
      char tmp = reverse[i];
      reverse[i] = reverse[j];
      reverse[j] = tmp;
      i += 1;
      j -= 1;
    }
    if (reverse == lower) return true;
    return false;
  }
};

int main() {
  //string s = "A man, a plan, a canal: Panama";
  string s = "0P";
  Solution sol;
  bool valid = sol.isPalindrome(s);
  if (valid)
    cout << "true" << endl;
  else
    cout << "false" << endl;
  return 0;
}
