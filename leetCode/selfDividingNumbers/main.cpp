#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> selfDividingNumbers(int left, int right) {
    vector<int> nums;

    for (int i = left; i <= right; i++) {
      int num = i;
      while (num > 0) {
        int d = num % 10;
        if (d == 0) {
          break;
        }
        if (d != 0 && (i % d) != 0) {
          break;
        }
        num = num / 10;
      }
      if (num == 0) {
        nums.push_back(i);
      }

    }

    return nums;
  }
};

int main() {
  Solution s;
  vector<int> nums = s.selfDividingNumbers(1, 22);
  for (int i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
  return 0;
}
