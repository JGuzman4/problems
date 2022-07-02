#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  int maxArea(vector<int>& height) {

    int m = 0;
    int i = 0;
    int j = height.size() - 1;

    while (i < j) {
      if (height[i] < height[j]) {
        m = max(m, height[i] * (j - i));
        i += 1;
      }
      else {
        m = max(m, height[j] * (j - i));
        j -= 1;
      }
    }
    return m;
  }
};

int main() {
  vector<int> height {
    1,8,6,2,5,4,8,3,7
  };

  Solution sol;

  int max = sol.maxArea(height);

  cout << max << endl;
  return 0;
}
