#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  bool judgeCircle(string moves) {
    int x = 0;
    int y = 0;
    for (int i = 0; i < moves.length(); i++) {
      if (moves[i] == 'U') {
        x += 1;
      }
      else if (moves[i] == 'D') {
        x -= 1;
      }
      else if (moves[i] == 'L') {
        y -= 1;
      }
      else if (moves[i] == 'R') {
        y += 1;
      }
    }
    if (x == 0 && y == 0) {
      return true;
    }
    return false;
  }
};

int main() {

  string moves = "UD";
  Solution sol;
  bool judge = sol.judgeCircle(moves);
  if (judge == true) {
    cout << "true" << endl;
  }
  else {
    cout << "false" << endl;
  }
  return 0;
}
