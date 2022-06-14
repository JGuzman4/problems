#include <bits/stdc++.h>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  bool backspaceCompare(string s, string t) {
    int i = s.length() - 1;
    int j = 0;
    string s_backspaced = "";
    string t_backspaced = "";
    while (i >= 0) {
      if (s[i] == '#') {
        j += 1;
      }
      else if (s[i] != '#' && j > 0) {
        j -= 1;
      }
      else {
        s_backspaced = s[i] + s_backspaced;
      }
      i -= 1;
    }

    i = t.length() - 1;
    j = 0;

    while (i >= 0) {
      if (t[i] == '#') {
        j += 1;
      }
      else if (t[i] != '#' && j > 0) {
        j -= 1;
      }
      else {
        t_backspaced = t[i] + t_backspaced;
      }
      i -= 1;
    }
    cout << s_backspaced << endl;
    cout << t_backspaced << endl;
    if (s_backspaced == t_backspaced)
      return true;
    return false;
  }
};

int main() {
  Solution sol;
  string s = "a#c";
  string t = "b";
  bool compare = sol.backspaceCompare(s, t);
  cout << compare << endl;
  return 0;
}
