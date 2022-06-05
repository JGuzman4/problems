#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> diStringMatch(string s) {
    vector<int> perm(s.length() + 1, 0);

    int max = s.length();
    int min = 0;

    for (int i = 0; i <= s.length(); i++) {
      if (s[i] == 'I') {
        perm[i] = min;
        min += 1;
      }
      if (s[i] == 'D') {
        perm[i] = max;
        max -= 1;
      }
    }
    perm[s.length()] = max;
    return perm;
  }
};

int main() {

    string s = "IDID";
    Solution sol;
    vector<int> perm = sol.diStringMatch(s);
    for (int i = 0; i < perm.size(); i++) {
        cout << perm[i];
        if (i != perm.size() - 1) {
            cout << " ";
        }
    }
    cout << "\n";
  return 0;
}
